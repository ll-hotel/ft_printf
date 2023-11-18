/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:02:29 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/09 19:16:15 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

char	*ft_strnstr(const char *big, const char *little, t_size len)
{
	t_size	i;
	t_size	j;
	t_size	lenlil;

	if (*little == 0)
		return ((char *)big);
	lenlil = 0;
	while (big && little[lenlil])
		lenlil++;
	if (len < lenlil)
		return (0);
	i = 0;
	while (big[i] && i < len - lenlil + 1)
	{
		j = 0;
		while (i + j < len && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == 0)
			return ((char *)(big + i));
		i += j + big[i] != 0;
	}
	return (0);
}
