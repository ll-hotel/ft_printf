/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:20:09 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/16 09:29:49 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static short	_log10(int n)
{
	short	l;

	l = 0;
	n /= 10;
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	const _Bool	is_negative = (n < 0);
	int			tmp;
	char		*val;
	short		len;
	short		i;

	len = _log10(n) + 1;
	val = malloc(sizeof(char) * (len + 1 + is_negative));
	if (!val)
		return (0);
	i = len + is_negative;
	tmp = (n + (n == -2147483648)) * (!is_negative - is_negative);
	while (i-- > is_negative)
	{
		val[i] = tmp % 10 + '0';
		tmp /= 10;
	}
	if (n < 0)
		val[0] = '-';
	if (n == -2147483648)
		val[len] = '8';
	val[len + is_negative] = 0;
	return (val);
}
