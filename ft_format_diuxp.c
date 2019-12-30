/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_diuxp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:29:06 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/25 04:08:56 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_format_diuxp(t_parse *parsed, long long value)
{
	char	*str;

	if (parsed->is_prec && parsed->is_width && parsed->type != 'p')
		str = ft_apply_precision_n_width_diuxp(parsed, value);
	else if (parsed->is_prec && !parsed->is_width && parsed->type != 'p')
		str = ft_apply_precision_diuxp(parsed, value);
	else
		str = ft_apply_width_diuxp(parsed, value);
	return (str);
}
