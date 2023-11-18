/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:54:05 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/08 16:53:22 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long long	t_size;

t_size	ft_strlcpy(char *dest, const char *src, t_size size)
{
	t_size	i;

	i = 0;
	if (size)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
