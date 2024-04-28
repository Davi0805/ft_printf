/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:38:06 by davi              #+#    #+#             */
/*   Updated: 2024/04/28 16:17:04 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include "libftprintf.h"

int	digitos(unsigned long n)
{
	int	nsize;

	while (n != 0)
	{
		n /= 16;
		nsize++;
	}
	return (nsize);
}

char	*inttohex(unsigned long n, int nsize)
{
	char	*res;
	int		tempn;
	int		i;

	i = 0;
	res = (char *)malloc((nsize + 3) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (n != 0)
	{
		tempn = n % 16;
		if (tempn < 10)
			res[i++] = tempn + '0';
		else
			res[i++] = tempn + 55;
		n /= 16;
	}
	res[i++] = 'x';
	res[i++] = 'O';
	res[i] = '\0';
	return (res);
}

int	ft_reverseputstr(char *str, int nsize)
{
	int	i;

	i = nsize;
	while (str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
	i = nsize;
	return (i);
}

int	putpointer(void *ptr)
{
	char			*res;
	unsigned long	endereco;
	int				nsize;

	endereco = (unsigned long)ptr;
	nsize = digitos(endereco);
	res = inttohex(endereco, nsize);
	nsize = nsize + 1;
	ft_reverseputstr(res, nsize);
	free(res);
	return (nsize);
}

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = (char *)malloc(20 * sizeof(char));
// 	putpointer(ptr);
// }
