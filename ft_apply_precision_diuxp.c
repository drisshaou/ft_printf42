/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_precision_diuxp.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:23:57 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/29 02:54:12 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_apply_precision_diuxp(t_parse *parsed, long long value)
{
	char	*tmp;
	size_t	size;
	size_t	is_neg;

	if (parsed->type == 'x')
		tmp = ft_hex_to_str((unsigned long)value);
	else if (parsed->type == 'X')
		tmp = ft_strupcase(ft_hex_to_str((unsigned long)value));
	else
		tmp = ft_lltoa(value < 0 ? -value : value);
	is_neg = (value < 0 && parsed->type != 'x' && parsed->type != 'X') ? 1 : 0;
	size = ft_strlen(tmp);
	size = (parsed->prec > size) ? parsed->prec : size;
	size += (is_neg) ? 1 : 0;
	size = (parsed->prec == 0 && value == 0) ? 0 : size;
	return (ft_return_precision_diuxp(is_neg, size, tmp));
}
