/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 01:29:21 by dhaouhao          #+#    #+#             */
/*   Updated: 2019/12/26 01:56:41 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_format_s(t_parse *parsed, char *tmp)
{
	char	*str;
	size_t	size;
	size_t	len;
	char	*s;

	if (parsed->is_prec && parsed->prec < ft_strlen(tmp) && parsed->type == 's')
		str = ft_substr(tmp, 0, parsed->prec);
	else
		str = ft_strdup(tmp);
	free(tmp);
	len = ft_strlen(str);
	//parsed->width -= (parsed->type == 'c' && len == 0 && parsed->is_width && parsed->width > len) ? 1 : 0;
	size = (parsed->is_width && parsed->width > len) ? parsed->width : len;
	if (!(s = malloc(sizeof(char) * (size + 1))) || !str)
		return (NULL);
	if (parsed->is_0_filled && parsed->type == '%')
		ft_memset(s, '0', size);
	else
		ft_memset(s, ' ', size);
	if (parsed->is_left)
		ft_memcpy(s, str, len);
	else
		ft_memcpy(s + (size - len), str, len);
	s[size] = '\0';
	free(str);
	return (s);
}
