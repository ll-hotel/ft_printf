/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:17:26 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/08 19:59:26 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static short	_log10(int n)
{
	short	l;

	l = 0;
	while (n)
	{
		n /= 10;
		l++;
	}
	return (l);
}

void	ft_putnbr_fd(int n, int fd)
{
	const _Bool	b[3] = {n < 0, n == 0, n == -2147483648};
	char		buf[11];
	short		log;
	short		i;

	log = _log10(n) + 1;
	i = log - !b[0] + b[1];
	n += b[2];
	n *= !b[0] - b[0];
	while (i-- > b[0])
	{
		buf[i] = n % 10 + '0';
		n /= 10;
	}
	if (b[0])
		buf[0] = '-';
	if (b[2])
		buf[log - 1] = '8';
	buf[log - !b[0] + b[1] + b[2]] = 0;
	write(fd, buf, log - !b[0] + b[1]);
}
