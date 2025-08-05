/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:20:58 by thiagouemur       #+#    #+#             */
/*   Updated: 2025/08/05 18:30:57 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, int uppercase)
{
	char	*base;
	char	c;
	int		count;

	if (uppercase == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += print_hex(n / 16, uppercase);
	c = base[n % 16];
	count += write(1, &c, 1);
	return (count);
}
