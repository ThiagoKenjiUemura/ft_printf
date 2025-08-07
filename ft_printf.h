/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:28:47 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/08/07 15:42:52 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	print_char(char c);
int	print_string(char *s);
int	print_number(int nbr);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned long n, int uppercase);
int	print_pointer(void *ptr);

#endif