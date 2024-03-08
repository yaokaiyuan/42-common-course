/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:51:04 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/03/07 09:59:14 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ags, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_print_char(va_arg(ags, int));
	else if (format == 's')
		len += ft_print_str(va_arg(ags, char *));
	else if (format == 'p')
		len += ft_print_ptr(va_arg(ags, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_print_nbr(va_arg(ags, int));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(ags, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(ags, unsigned int), format);
	else if (format == '%')
		len += ft_print_percent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ags;
	int		len;

	i = 0;
	len = 0;
	va_start(ags, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(ags, str[i + 1]);
			i++;
		}
		else
			len += ft_print_char(str[i]);
		i++;
	}
	va_end(ags);
	return (len);
}
