/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:39:41 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/18 16:32:36 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_utils.h"
#include <stdlib.h>
#include <stdarg.h>

static int	handle_string(const char f, va_list *args)
{
	char	*s;
	int		r;

	r = 1;
	s = 0;
	if (f == '%')
		ft_putchar_fd('%', 1);
	else if (f == 'c')
		ft_putchar_fd(va_arg(*args, int), 1);
	else if (f == 's')
	{
		s = va_arg(*args, char *);
		if (!s)
			s = "(null)";
		r = ft_strlen(s);
		ft_putstr_fd(s, 1);
	}
	return (r);
}

static int	handle_number(const char f, va_list *args)
{
	int		i;
	long	len;

	i = 0;
	if (f == 'i' || f == 'd')
		i = va_arg(*args, int);
	ft_putnbr_fd(i, 1);
	len = 1 + (i < 0);
	i /= 10;
	while (i)
	{
		len += 1;
		i /= 10;
	}
	return (len);
}

static int	handle_special(const char f, va_list *args)
{
	char	*s;
	int		len;

	s = 0;
	if (f == 'p')
		s = ft_xtoa((t_ull) va_arg(*args, void *), 1, 0);
	else if (f == 'X' || f == 'x')
		s = ft_xtoa(va_arg(*args, t_ui), 0, f == 'X');
	else if (f == 'u')
		s = ft_utoa(va_arg(*args, t_ui));
	len = 0;
	if (s)
	{
		if (f == 'p' && !ft_strncmp(s, "0x0", 3))
			s = (free(s), "(nil)");
		len = ft_strlen(s);
		ft_putstr_fd(s, 1);
		if (ft_strncmp(s, "(nil)", 3))
			free(s);
	}
	return (len);
}

static short	handle_format(const char *f, va_list *args, int *count)
{
	short	offset;

	offset = 1;
	if (!*f)
		return (0);
	if (*f == '%' || *f == 'c' || *f == 's')
		*count += handle_string(*f, args);
	else if (*f == 'i' || *f == 'd')
		*count += handle_number(*f, args);
	else if (*f == 'p' || *f == 'u' || *f == 'x' || *f == 'X')
		*count += handle_special(*f, args);
	return (offset);
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
		l += tmp;
	}
	va_end(args);
	return (count);
}
