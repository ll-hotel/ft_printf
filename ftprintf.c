/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:39:41 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/27 04:37:50 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fake_libft.h"
#include "handlers.h"
#include <stdarg.h>
#include <unistd.h>

static int	to_next_symbol(const char *f)
{
	int	i;

	if (!f)
		return (0);
	i = 0;
	while (f[i] && f[i] != '%')
		i += 1;
	return (write(1, f, i));
}

int	ft_printf(const char *format, ...)
{
	const t_ul	len = ft_strlen(format);
	va_list		args;
	t_ul		l;
	int			count;
	int			tmp;

	va_start(args, format);
	l = 0;
	count = 0;
	tmp = 0;
	while (l < len)
	{
		tmp = to_next_symbol(format + l);
		l += tmp + 1;
		count += tmp;
		if (!format[l - 1])
			continue ;
		tmp = handle_format(format + l, &args, &count);
		if (tmp < 0)
			return (va_end(args), -1);
		l += tmp;
	}
	va_end(args);
	return (count);
}
