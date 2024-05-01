/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:38:06 by davi              #+#    #+#             */
/*   Updated: 2024/05/01 10:48:01 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Libft/libft.h"
#include "ft_printf.h"

int ft_putpointer(void *ptr) {
	unsigned long address = (unsigned long)ptr;
	char buffer[20];
	int numchar;
	int i = 0;
	while (address > 0) {
		int digit = address % 16;
		if (digit < 10) {
			buffer[i] = digit + '0';
		} else {
			buffer[i] = digit - 10 + 'a';
		}
		address /= 16;
		i++;
	}
	numchar = i + 2;
	write(1, "0x", 2);
	for (int j = i - 1; j >= 0; j--) {
		write(1, &buffer[j], 1);
	}
	return (numchar);
}

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = (char *)malloc(20 * sizeof(char));
// 	putpointer(ptr);
// }
