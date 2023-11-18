/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:33:54 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/08 18:21:44 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

static t_size	_strlen(const char *s)
{
	t_size	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	const t_size	len_dst = _strlen(dst);
	const t_size	len_src = _strlen(src);
	t_size			l;
	t_size			i;

	l = 0;
	if (!size)
		return (len_src);
	while (l < size && dst[l])
		l++;
	i = 0;
	while (l < size - 1 && src[i])
		dst[l++] = src[i++];
	if (len_dst <= size)
		dst[l] = 0;
	if (size < len_dst)
		return (size + len_src);
	return (len_dst + len_src);
}
