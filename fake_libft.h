/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 03:58:15 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/27 03:59:35 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FAKE_LIBFT_H
# define FAKE_LIBFT_H

typedef unsigned long		t_ul;
typedef unsigned int		t_ui;
typedef unsigned long long	t_ull;

int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
void	*ft_calloc(unsigned long nmemb, unsigned long size);

#endif
