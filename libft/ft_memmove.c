/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:10:41 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/09 13:29:34 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	_mmove_left(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	while (i--)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
}

static void	_mmove_right(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	if ((char *)src < (char *)dest && ((char *)dest) < (char *)src + n)
		_mmove_left(dest, src, n);
	else
		_mmove_right(dest, src, n);
	return (dest);
}
