/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:53:52 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/08/07 15:48:12 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char format, va_list args)
{
	if (format == '%')
		return (print_char('%'));
	else if (format == 'c')
		return (print_char(va_arg(args, int)));
	else if (format == 's')
		return (print_string(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (print_number(va_arg(args, int)));
	else if (format == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (print_hex(va_arg(args, unsigned int), 0));
	else if (format == 'X')
		return (print_hex(va_arg(args, unsigned int), 1));
	else if (format == 'p')
		return (print_pointer(va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += check_format(*format, args);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
