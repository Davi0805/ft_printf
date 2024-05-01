/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:46:24 by dmelo-ca          #+#    #+#             */
/*   Updated: 2024/05/01 14:47:54 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Libft/libft.h"
#include "ft_printf.h"

int unsinttoa(unsigned int n, char *buffer)
{
	int i;
	int start;
	int end;
	char temp;

	i = 0;
	while(n != 0)
	{
		buffer[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	buffer[i] = '\0';

	start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = temp;
		start++;
		end--;
	}
}
int	ft_putunsint(unsigned int n)
{
	char	p[20];
	int		i;

	unsinttoa(n, p);
	i = 0;
	while (p[i])
	{
		write(1, &p[i], 1);
		i++;
	}
	return (i);
}
