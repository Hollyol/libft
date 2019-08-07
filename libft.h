/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:27:29 by xapadoan          #+#    #+#             */
/*   Updated: 2019/03/18 14:26:33 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <strings.h>
# include <errno.h>

# define FT_MAX(nb1,nb2) (nb1 > nb2 ? nb1 : nb2)
# define FT_MIN(nb1,nb2) (nb1 < nb2 ? nb1 : nb2)
# define FT_ABS(nb) (nb < 0 ? -nb : nb)

# define GNL_BUFF_SIZE 1024

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_point
{
	unsigned int x;
	unsigned int y;
}					t_point;

void				ft_bzero(void *s, size_t len);
void				ft_errexit(const char *message);
int					ft_get_nextline(const int fd, char **line);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int letter);
int					ft_tolower(int letter);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s);
char				*ft_strndup(const char *s, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strcasestr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,\
		size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t len);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putstr(char const *s);
void				ft_putchar(char c);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstapp(t_list **alst, t_list *new);
void				ft_lstiter(t_list *list, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_isupper(int c);
int					ft_islower(int c);
void				ft_putendl(const char *s);
void				ft_puterror(const char *message);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putwarning(const char *message);
char				*ft_strappend(char *s1, const char *s2);
void				ft_print_word_tab(char **tab);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
int					ft_strcdup(char **dst, const char *src, int c);
char				*ft_strnchr(const char *s, int c, size_t n);
void				ft_strtrunc(char **str, unsigned int start, size_t len);
void				ft_dellst(t_list **alst);
void				ft_putbit(unsigned int nb, int base);
int					ft_heavybit(unsigned int byte);
int					ft_sqrt(int nb);
t_point				*ft_pointnew(unsigned int x, unsigned int y);
void				ft_pointdel(t_point	**point);
void				free2dtab(void **str);

#endif
