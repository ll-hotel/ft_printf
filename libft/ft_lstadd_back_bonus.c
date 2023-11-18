/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:12:20 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/17 12:27:03 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **l, t_list *_new)
{
	t_list	*last;

	if (!*l)
	{
		*l = _new;
		return ;
	}
	last = *l;
	while (last->next)
		last = last->next;
	last->next = _new;
}
