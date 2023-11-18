/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:39:57 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/09 13:29:13 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*bytes_to;
	unsigned char	*bytes_from;

	if (!dest && !src)
		return (0);
	bytes_from = (unsigned char *)src;
	bytes_to = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		bytes_to[i] = bytes_from[i];
		i++;
	}
	return (dest);
}
