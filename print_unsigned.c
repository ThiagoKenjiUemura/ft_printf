/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiagouemura <thiagouemura@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:57:38 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/08/01 16:40:41 by thiagouemur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_usigned(unsigned int n)
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
		count += print_usigned(n / 10);
	c = n % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}
