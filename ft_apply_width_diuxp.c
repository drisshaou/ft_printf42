/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_width_diuxp.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:26:04 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/29 02:48:45 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_apply_width_diuxp(t_parse *parsed, long long value)
{
	char	*tmp;
	char	*hexa;
	size_t	size;
	size_t	is_neg;

	if (parsed->type == 'x')
		tmp = ft_hex_to_str((unsigned long)value);
	else if (parsed->type == 'X')
		tmp = ft_strupcase(ft_hex_to_str((unsigned long)value));
	else if (parsed->type == 'p')
	{
		hexa = ft_hex_to_str((unsigned long)value);
		tmp = ft_strjoin("0x", hexa);
		free(hexa);
	}
	else
		tmp = ft_lltoa(value < 0 ? -value : value);
	is_neg = (value < 0 && parsed->type != 'x' && parsed->type != 'X'
	&& parsed->type != 'p') ? 1 : 0;
	size = ft_strlen(tmp);
	size += (is_neg) ? 1 : 0;
	size = (parsed->is_width && parsed->width > size) ? parsed->width : size;
	return (ft_return_width_diuxp(parsed, is_neg, size, tmp));
}
