/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:36:34 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/09 20:19:30 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size;

int						ft_atoi(const char *nptr);
void					ft_bzero(void *s, t_size n);
void					*ft_calloc(t_size nmemb, t_size size);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
char					*ft_itoa(int n);
void					*ft_memchr(const void *s, int c, t_size n);
int						ft_memcmp(const void *s1, const void *s2, t_size n);
void					*ft_memcpy(void *dest, const void *src, t_size n);
void					*ft_memmove(void *dest, const void *src, t_size n);
void					*ft_memset(void *s, int c, t_size n);
void					ft_putchar_fd(char c, int fd);
void					ft_putnbr_fd(int n, int fd);
void					ft_putstr_fd(char *s, int fd);
void					ft_putendl_fd(char *s, int fd);
char					**ft_split(const char *s, char c);
char					*ft_strchr(const char *s, int c);
char					*ft_strdup(const char *s);
t_size					ft_strlcat(char *dst, const char *src, t_size size);
t_size					ft_strlcpy(char *dst, const char *src, t_size size);
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
t_size					ft_strlen(const char *s);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_strmapi(const char *s, char (*f)(unsigned int,
								char));
int						ft_strncmp(const char *s1, const char *s2, t_size n);
char					*ft_strnstr(const char *big, const char *little,
							t_size len);
char					*ft_strrchr(const char *s, int c);
char					*ft_strtrim(const char *s1, const char *set);
char					*ft_substr(const char *s, unsigned int start,
							t_size len);
int						ft_tolower(int c);
int						ft_toupper(int c);

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

t_list					*ft_lstnew(void *content);
void					ft_lstadd_front(t_list **lst, t_list *_new);
int						ft_lstsize(t_list *lst);
t_list					*ft_lstlast(t_list *lst);
void					ft_lstadd_back(t_list **lst, t_list *_new);
void					ft_lstdelone(t_list *lst, void (*del)(void *));
void					ft_lstclear(t_list **lst, void (*del)(void *));
void					ft_lstiter(t_list *lst, void (*f)(void *));
t_list					*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *));

#endif
