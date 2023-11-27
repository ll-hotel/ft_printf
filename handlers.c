/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 03:56:34 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/27 04:43:14 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"
#include "ft_printf_utils.h"
#include <stdlib.h>

int	handle_string(const char f, va_list *args)
{
	char	*s;

	if (f == '%')
		return (ft_putchar_fd('%', 1));
	else if (f == 'c')
		return (ft_putchar_fd(va_arg(*args, int), 1));
	else if (f == 's')
	{
		s = va_arg(*args, char *);
		if (!s)
			s = "(null)";
		return (ft_putstr_fd(s, 1));
	}
	return (0);
}

int	handle_number(const char f, va_list *args)
{
	int		i;

	i = 0;
	if (f == 'i' || f == 'd')
		i = va_arg(*args, int);
	else
		return (0);
	return (ft_putnbr_fd(i, 1));
}

int	handle_special(const char f, va_list *args)
{
	char	*s;
	int		len;

	s = 0;
	if (f == 'p')
		s = ft_xtoa(va_arg(*args, t_ull), 1, 0);
	else if (f == 'X' || f == 'x')
		s = ft_xtoa(va_arg(*args, t_ui), 0, f == 'X');
	else if (f == 'u')
		s = ft_utoa(va_arg(*args, t_ui));
	len = 0;
	if (s)
	{
		if (f == 'p' && !ft_strncmp(s, "0x0", 3))
			s = (free(s), "(nil)");
		len = ft_putstr_fd(s, 1);
		if (ft_strncmp(s, "(nil)", 3))
			free(s);
	}
	return (len);
}

int	handle_format(const char *f, va_list *args, int *count)
{
	int	err;

	if (!*f)
		return (0);
	err = 0;
	if (*f == '%' || *f == 'c' || *f == 's')
		err = handle_string(*f, args);
	else if (*f == 'i' || *f == 'd')
		err = handle_number(*f, args);
	else if (*f == 'p' || *f == 'u' || *f == 'x' || *f == 'X')
		err = handle_special(*f, args);
	if (err > 0)
		*count += err;
	return ((err >= 0) - (err < 0));
}
