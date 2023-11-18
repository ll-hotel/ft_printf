/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:41:58 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/18 14:41:20 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/ft_printf_utils.h"

int	ft_log_b(t_ull n, t_ul b)
{
	int	l;

	l = 0;
	n /= b;
	while (n)
	{
		n /= (t_ull)b;
		l += 1;
	}
	return (l);
}
