/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:31:41 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/31 15:00:12 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_nbr_len(int n);

static int	get_nbr_len(int n)
{
	size_t	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

int	print_number(int nbr)
{
	char	*buf;
	int		len;
	long	nb;
	int		total;

	nb = nbr;
	len = get_nbr_len(nb);
	buf = malloc(len + 1);
	if (nb == 0)
		buf[--len] = '0';
	if (nb < 0)
	{
		buf[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		buf[--len] = nb % 10 + '0';
		nb /= 10;
	}
	total = write(1, buf, get_nbr_len(nbr));
	free(buf);
	return (total);
}
