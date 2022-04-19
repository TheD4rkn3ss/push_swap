/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferna <lucferna@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:48:17 by lucferna          #+#    #+#             */
/*   Updated: 2022/04/08 20:49:40 by lucferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

/*
 * @brief Converts the numbers in string to integer; Numbers can be followed by
 an '-' sign to make them negative.
 *
 * @param str The string in which the numbers are to be collected.
 * @return The integer form of those numbers;
 */
int			ft_atoi(const char *str);

/*
 * @brief Erases 'n' bytes from the memory area pointed by '*ptr'.
 *
 * @param ptr Memory area to be erased. Usually occupied by a string.
 * @param n How many bytes you want to erase.
 * @return None. Operation occurs in place.
 */
void		ft_bzero(void *ptr, size_t n);

/*
 * @brief Allocates a space in memory.
 *
 * @param nmemb How many spaces wanted.
 * @param size The size of each space.
 * @return void* Returns a pointer to that memory space, or NULL(0) if error.
 */
void		*ft_calloc(size_t nmemb, size_t size);

/*
 * @brief Checks if the given string contains only alphanumeric characters.
 *
 * @param c The character to be checked.
 * @return int 1 if True; 0 if otherwise.
 */
int			ft_isalnum(int c);

/*
 * @brief Checks if the given character is alphabetic.
 *
 * @param n The int value of tested character
 * @return int 1 if True; 0 if otherwise.
 */
int			ft_isalpha(int n);

/*
 * @brief Checks if the given string contains only ascii characters.
 *
 * @param c The string to be checked.
 * @return int 1 if True; 0 if otherwise.
 */
int			ft_isascii(int c);

/*
 * @brief Checks if the given character is a digit;
 *
 * @param n The int value of tested character.
 * @return int 1 if True; 0 if otherwise.
 */
int			ft_isdigit(int n);

/*
 * @brief Checks if the given character is printable.
 *
 * @param n The int value of tested character.
 * @return int 1 if True; 0 if otherwise.
 */
int			ft_isprint(int n);

/*
 * @brief Converts the given number to a string.
 *
 * @param nb The number you want (negative included).
 * @return char* A pointer containing the number.
 */
char		*ft_itoa(int nb);

/*
 * @brief Searchs for the character 'c' in the first 'n' bytes of the string
 pointed by '*s'.
 *
 * @param s The string to be searched.
 * @param c The character you want to find.
 * @param n How many bytes will be searched.
 * @return void* Returns a pointer to the occurrence.
 */
void		*ft_memchr(const void *s, int c, size_t n);

/*
 * @brief Compares the first 'n' bytes of 's1' and 's2'.
 *
 * @param s1 The first pointer to be compared.
 * @param s2 The second pointer to be compared.
 * @param n How many bytes is to be compared.
 * @return int Returns a positive number, a negative number or 0 if the strings
 * are respectively
 * bigger, lower or equal.
 */
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/*
 * @brief Copies 'n' bytes from 'src' to 'dest'.
 *
 * @param dest The destination of the copy.
 * @param src The source string to be copied.
 * @param n How many bytes you want copied.
 * @return void* Returns a pointer to the area of 'dest'.
 */
void		*ft_memcpy(void *dest, const void *src, size_t n);

/*
 * @brief Copies 'n' bytes from 'src' to 'dest', without overlapping memory,
 through a temporary variable.
 *
 * @param dest The destination of the copy.
 * @param src The source string to be copied.
 * @param n How many bytes you want copied.
 * @return void* Returns a pointer to the area of 'dest'.
 */
void		*ft_memmove(void *dest, const void *src, size_t n);

/*
 * @brief Overwrite the first 'n' bytes of '*ptr' with the character given by
 'c';
 *
 * @param ptr A pointer to the memory area.
 * @param c The character who will overwrite the original content.
 * @param n How many bytes will be overwrited.
 * @return void* Returns the modified '*ptr'.
 */
void		*ft_memset(char *ptr, int c, size_t n);

/*
 * @brief Writes the given character 'c' with the specified 'fd' instruction of
 function write().
 *
 * @param c The character.
 * @param fd The format you want the write() to operate.
 * @return NULL if 'c' isn't printable (ERROR).
 */
void		ft_putchar_fd(char c, int fd);

/*
 * @brief Writes the given number 'nb' with the specified 'fd' instruction of
 function write().
 *
 * @param nb The number.
 * @param fd The format you want the write() to operate.
 * @return No return value
 */
void		ft_putnbr_fd(int nb, int fd);

/*
 * @brief Writes the given string 'str' with the specified 'fd' instruction of
 function write().
 *
 * @param str A pointer to the string.
 * @param fd The format you want the write() to operate.
 */
void		ft_putstr_fd(char *str, int fd);

/*
 * @brief Writes the given string 's' with the specified 'fd' instruction of
 * function write() with an additional new line ('\n').
 *
 * @param s A pointer to the string.
 * @param fd The format you want the write() to operate.
 */
void		ft_putendl_fd(char *s, int fd);

/*
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained
 by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must be ended by a NULL pointer.
 *
 * @param s The string to be checked.
 * @param c The delimiter character.
 * @return A pointer to an array of strings resulting from the split.
 */
char		**ft_split(char const *s, char c);

/*
 * @brief Search for the character 'c' in the given string '*ptr'.
 *
 * @param ptr The searched string.
 * @param c The character you want to find;
 * @return A pointer in the position the character was found.
 */
char		*ft_strchr(const char *ptr, int c);

/*
 * @brief Creates a new string with the same content, and size, as '*s'.
 *
 * @param s The reference for the new string.
 * @return char* Returns a pointer to the new string.
 */
char		*ft_strdup(const char *s);

/*
 * @brief Iterates through '*s' applying the function '*f' to each element.
 *
 * @param s The string to be modified.
 * @param f A pointer to the desired function.
 */
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

/*
 * @brief Creates a new string with the content of '*s1' and '*s2'. Guarantee a
 NULL byte at the end.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return Returns a pointer to the new created string.
 */
char		*ft_strjoin(char const *s1, char const *s2);

/*
 * @brief Concatenates a given number of bytes from '*src' to '*dest',
 * and guarantee a NULL(\0) terminated byte.
 *
 * @param dest The destination of the concatenation.
 * @param src The string to be concatenated.
 * @param size How many bytes you want to concatenate.
 * @return Returns the total size of '*dest'.
 */
size_t		ft_strlcat(char *dest, const char *src, size_t size);

/*
 * @brief Copy a given number of bytes from '*src' to '*dest', and guarantee a
 NULL(\0) terminated byte
 *
 * @param dest The string recieving the copied bytes.
 * @param src The reference string for copy.
 * @param size How many bytes you want to copy.
 * @return The total size of '*dest' after copying.
 */
size_t		ft_strlcpy(char *dest, const char *src, size_t size);

/*
 * @brief Calculate the size of '*s'
 *
 * @param s The string you want to find it's size.
 * @return Size of string. NULL byte not included.
 */
size_t		ft_strlen(const char *s);

/*
 * @brief Apllies the function 'f()' to the string pointed by '*s', creating a
 new string.;
 *
 * @param s Pointer to a string;
 * @param f Function to be apllied in the string.
 * @return Returns a pointer to the new created string.
 */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
 * @brief Compares 'n' bytes of two given strings ('*s1' and '*s2').
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n How many bytes will be compared.
 * @return Returns a positive number, a negative number, or 0, if the strings
 * are bigger, smaller or equals.
 */
int			ft_strncmp(const char *s1, const char *s2, size_t n);

/*
 * @brief Checks if the string pointed by '*little' is present in '*big'.
 *
 * @param big The main string to be searched.
 * @param little The string that will be searched.
 * @param len How many bityes will be searched.
 * @return Returns a pointer to the beginning of '*little' found in '*big'.
 * Returns NULL if not found.
 */
char		*ft_strnstr(const char *big, const char *little, size_t len);

/*
 * @brief Searchs for the character 'c' in the string pointed by '*str',
 starting at the end.
 *
 * @param str The string to be searched.
 * @param c Wich character to search.
 * @return Returns a pointer to the first occurrance of the character.
 */
char		*ft_strrchr(const char *str, int c);

/*
 * @brief Creates a new string from '*s1' with the character specified in 'set'
 removed from
 * the beginning and end of the string.
 *
 * @param s1 The string of reference.
 * @param set The character to be removed.
 * @return Returns the new created string.
 */
char		*ft_strtrim(char const *s1, char const *set);

/*
 * @brief Creates a new string copying 'len' bytes from the 'start' in original
 string pointed by '*s'.
 * It NULL terminates the new string.
 *
 * @param s The string of reference.
 * @param start The start index of copying.
 * @param len How many bites will be copied.
 * @return Returns a pointer to the new created string,
 */
char		*ft_substr(const char *s, unsigned int start, size_t len);

/*
 * @brief Lowercase the given 'c' character.
 *
 * @param c The character.
 * @return The int value of the lowered character. If not a character, the
 * original 'c' is returned.
 */
int			ft_tolower(int c);

/*
 * @brief Uppercase the given 'c' character.
 *
 * @param c The character.
 * @return The int value of the uppercased character. If not a character, the
 * original 'c' is returned.
 */
int			ft_toupper(int c);

/*
 * @brief Allocates (with malloc(3)) and returns a new element. The variable
 * ’content’ is initialized with the value of the parameter ’content’.
 * The variable ’next’ is initialized to NULL.
 *
 * @param content  The content to create the new element with.
 * @return t_list*  The new list. NULL if allocation fails.
 */
t_list		*ft_lstnew(void *content);

/*
 * @brief Adds the element 'new' at the beginning of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 */
void		ft_lstadd_front(t_list **lst, t_list *new);

/*
 * @brief Counts the number of elements in the list
 *
 * @param lst The beginning of the list.
 * @return int Lenght of the list.
 */
int			ft_lstsize(t_list *lst);

/*
 * @brief Returns the last element of the list.
 *
 * @param lst The beginning of the list.
 * @return t_list* Last element of the list.
 */
t_list		*ft_lstlast(t_list *lst);

/*
 * @brief Adds the element new at the end of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 */
void		ft_lstadd_back(t_list **lst, t_list *new);

/*
 * @brief Takes as a parameter an element and frees the memory of the element’s
 * content using the function ’del’ given as a parameter and free the element.
 * The memory of ’next’ must not be freed.
 *
 * @param lst The element to free.
 * @param del The address of the function used to delete the content.
 */
void		ft_lstdelone(t_list *lst, void (*del)(void *));

/*
 * @brief Deletes and frees the given element and every successor of that
 * element, using the function ’del’ and free(3).Finally, the pointer to the
 * list must be set to NULL.
 *
 * @param lst The address of a pointer to an element.
 * @param del The address of the function used to delete the content.
 */
void		ft_lstclear(t_list **lst, void (*del)(void *));

/*
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element.
 *
 * @param lst The address of a pointer to an element.
 * @param f The address of the function used to iterate on the list.
 */
void		ft_lstiter(t_list *lst, void (*f)(void *));

/*
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 of each element. Creates a new list resulting of the successive applications
 of the function ’f’. The ’del’ function is used to delete the content of an
 element if needed.
 *
 * @param lst The address of a pointer to an element.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content.
 * @return t_list* The new list. NULL if allocation fails.
 */
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
