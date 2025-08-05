/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiagouemura <thiagouemura@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:28:47 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/08/01 15:22:27 by thiagouemur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	print_char(char c);
int	print_string(char *s);
int	print_number(int nbr);
int print_hex(unsigned int n, int uppercase);

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

#endif