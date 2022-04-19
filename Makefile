NAME		= push_swap
HEADER		= $(addprefix ./include/, push_swap.h)

LIBFT_PATH	= ./libft
LIBFT		= $(LIBFT_PATH)/libft.a

SRCDIR		= srcs
SRCS		= $(addprefix $(SRCDIR)/, push_swap.c small_sort.c big_sort.c \
	operations1.c operations2.c push_swap_utils.c push_swap_utils2.c)

OBJDIR		= objs
OBJS		= $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
GCC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Werror -Wextra
VAL			= valgrind -s --leak-check=full

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS) $(HEADER) $(LIBFT)
	$(GCC) $(OBJS) $(LIBFT) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(HEADER)
	$(GCC) -c $(CFLAGS) $< -o $@

$(OBJDIR):
	mkdir $(OBJDIR)

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	$(RM) $(OBJDIR)
	cd ./libft && make fclean

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
