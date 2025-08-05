/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiagouemura <thiagouemura@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:25:50 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/08/01 16:41:42 by thiagouemur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		write(1, s++, 1);
		count++;
	}
	return (count);
}
