/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:57:38 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/31 15:09:48 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_usigned(unsigned int n)
{
	char	c;
	int		count;
	
	if(n >= 0 && n < 10)
	{
		c = n + '0';
		return (write(1, &c, 1));
	} 
	else
	{
		count = count + print_usigned(n / 10);
		c = n % 10 + '0';
		
	}
}