/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:43:28 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/08 19:55:45 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	t_size	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		(*f)(i, s + i);
	s[i] = 0;
}
