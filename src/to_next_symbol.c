/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_next_symbol.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:50:28 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/17 17:53:17 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/ft_printf_utils.h"
#include <ctype.h>
#include <unistd.h>

t_ul	to_next_symbol(const char *format)
{
	t_ul	i;

	i = 0;
	while (format[i] && format[i] != '%')
		i += 1;
	write(1, format, i);
	return (i);
}
