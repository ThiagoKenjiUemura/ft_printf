/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiagouemura <thiagouemura@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:20:58 by thiagouemur       #+#    #+#             */
/*   Updated: 2025/08/05 13:00:25 by thiagouemur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int print_hex(unsigned int n, int uppercase)
{
	char	c;
	int		count;
	
	count = 0;
	if (n >= 0 && n < 10)
	{
		c = n + '0';
		return (write(1, &c, 1));
	}
	if (n == 10)
		return (write(1, "A", 1));
	if (n == 11)
		return (write(1, "B", 1));
	if (n == 12)
		return (write(1, "C", 1));
	if (n == 13)
		return (write(1, "D", 1));
	if (n == 14)
		return (write(1, "E", 1));
	if (n == 15)
		return (write(1, "F", 1));
	if (n % 16 == 0)
	{
		n = (n / 16);
		c = n + '0';
		write (1, &c, 1);
		
	}
	if (n % 16 > 0 && n % 16 < 10)
		n = (n / 16) * 10 + (n % 16);
		c = n + '0';
		return (write(1, &c, 2));
}
