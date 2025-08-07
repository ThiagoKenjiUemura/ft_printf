/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:57:38 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/08/07 15:25:58 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == 0)
	{
		c = '0';
		return (write(1, &c, 1));
	}
	if (n >= 10)
		count += print_unsigned(n / 10);
	c = n % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}
