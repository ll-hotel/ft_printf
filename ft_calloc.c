/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 03:52:27 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/27 04:29:03 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned long nmemb, unsigned long _size)
{
	const unsigned long	size = nmemb * _size;
	unsigned long		l;
	char				*p;

	p = malloc(size * nmemb);
	if (!p)
		return (0);
	l = 0;
	while (l < size)
		p[l++] = 0;
	return (p);
}
