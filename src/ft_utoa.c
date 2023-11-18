/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:47:52 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/16 10:02:35 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/ft_printf_utils.h"

char	*ft_utoa(t_ui n)
{
	t_ui		tmp;
	char		*val;
	short		len;
	short		i;

	len = ft_log_b(n, 10) + 1;
	val = (char *)ft_calloc(len + 1, sizeof(char));
	if (!val)
		return (0);
	i = len;
	tmp = n;
	val[0] = '0';
	while (tmp > 0)
	{
		val[--i] = tmp % 10 + '0';
		tmp /= 10;
	}
	return (val);
}
