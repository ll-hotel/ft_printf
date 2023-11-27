/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:43:57 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/24 14:03:59 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

char	*ft_xtoa(t_ull value, short ox, short capital)
{
	const char	set[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', \
		'a', 'b', 'c', 'd', 'e', 'f'};
	short		i;
	char		*a;

	i = ft_log_b(value, 16) + 1;
	a = (char *)ft_calloc(i + 1 + (2 * ox), sizeof(char));
	if (!a)
		return (0);
	capital &= 1;
	capital *= 32;
	while (i)
	{
		a[(2 * ox) + --i] = set[value % 16] - capital * ((value % 16) > 9);
		value /= 16;
	}
	if (ox)
	{
		a[0] = '0';
		a[1] = 'x' - capital;
	}
	return (a);
}
