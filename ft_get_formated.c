/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_formated.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 06:47:36 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/27 07:12:57 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_formated(char *str, va_list args)
{
	t_parse	parsed;
	char	*va_string;

	ft_fill_struct(args, &parsed, str);
	if (parsed.type == '%')
		return (ft_format_c(&parsed, '%'));
	else if (parsed.type == 'c')
		return (ft_format_c(&parsed, (char)va_arg(args, int)));
	else if (parsed.type == 's')
	{
		va_string = va_arg(args, char *);
		va_string = (va_string == NULL) ? "(null)" : va_string;
		return (ft_format_s(&parsed, ft_strdup(va_string)));
	}
	else if (parsed.type == 'd' || parsed.type == 'i')
		return (ft_format_diuxp(&parsed, va_arg(args, int)));
	else if (parsed.type == 'u')
		return (ft_format_diuxp(&parsed, va_arg(args, unsigned int)));
	else if (parsed.type == 'x' || parsed.type == 'X' || parsed.type == 'p')
		return (ft_format_diuxp(&parsed, va_arg(args, unsigned long)));
	else
		return (NULL);
}
