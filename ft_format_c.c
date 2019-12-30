/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:29:45 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/24 02:08:28 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_format_c(t_parse *parsed, char c)
{
	char	*s;
	int		size;

	size = (ft_isprint(c)) ? 1 : 0;
		size = 1;
	if (!(s = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (size == 1)
		s[0] = c;
	s[size] = '\0';
	return (ft_format_s(parsed, s));
}
