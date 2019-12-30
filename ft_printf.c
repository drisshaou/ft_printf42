/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 23:31:45 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/28 03:32:31 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	char	*converted_str;
	va_list	args;
	size_t	size;

	if (!str)
		return (0);
	converted_str = ft_strdup("");
	va_start(args, str);
	ft_convert_str(str, &converted_str, args);
	va_end(args);
	if (converted_str != NULL)
	{
		ft_putstr(converted_str);
		size = ft_strlen(converted_str);
		free(converted_str);
		return (size);
	}
	else
		return (0);
}
