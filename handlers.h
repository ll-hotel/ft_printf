/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ll-hotel <ll-hotel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 04:01:22 by ll-hotel          #+#    #+#             */
/*   Updated: 2023/11/27 04:16:49 by ll-hotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_H
# define HANDLERS_H
# include <stdarg.h>

int	handle_format(const char *f, va_list *args, int *count);
int	handle_string(const char f, va_list *args);
int	handle_number(const char f, va_list *args);
int	handle_special(const char f, va_list *args);

#endif
