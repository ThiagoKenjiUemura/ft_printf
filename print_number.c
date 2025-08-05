/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:31:41 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/08/05 14:37:59 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(int nbr)
{
	long	n;
	int		count;
	char	c;

	n = nbr;
	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		count += print_number(n / 10);
	c = n % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}
