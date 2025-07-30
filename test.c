/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:41:50 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/30 16:59:22 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int ret1, ret2;

	ret1 = printf("Original: Hello %s %d\n", "world", 42);
	ret2 = ft_printf("Custom : Hello %s %d\n", "world", 42);

	printf("Ret printf: %d | Ret ft_printf: %d\n", ret1, ret2);
	return (0);
}