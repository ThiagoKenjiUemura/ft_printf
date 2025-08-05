/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:35:38 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/08/05 17:18:43 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	unsigned long	address;
	int				count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = 0;
	address = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += print_hex(address, 0);
	return (count);
}
