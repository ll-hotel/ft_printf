/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:39:18 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/27 03:59:29 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H
# include "fake_libft.h"

t_ul	to_next_symbol(const char *format);
int		ft_log_b(t_ull n, t_ul b);
char	*ft_xtoa(t_ull n, short ox, short capital);
char	*ft_utoa(t_ui n);

#endif
