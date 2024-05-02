/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:26:26 by dmelo-ca          #+#    #+#             */
/*   Updated: 2024/05/01 15:24:17 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Libft/libft.h"
#include "ft_printf.h"

int	digitos(int n)
{
	int	nsize;

	nsize = 0;
	while (n != 0)
	{
		n /= 16;
		nsize++;
	}
	return (nsize);
}

char	*inttohex(int n, int nsize)
{
	char	*res;
	int		tempn;
	int		i;

	i = 0;
	res = (char *)malloc((nsize + 1) * sizeof(char));
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
	res[i] = '\0';
	return (res);
}

int	ft_puthexupcase(unsigned int n)
{
	char	*res;
	int		nsize;
	int		i;
	int		len;
	char	tempchar;

	nsize = digitos(n);
	res = inttohex(n, nsize);
	len = nsize;
	i = 0;
	while (i < len / 2)
	{
		tempchar = res[i];
		res[i] = res[len - i - 1];
		res[len - i - 1] = tempchar;
		i++;
	}
	ft_putstr(res);
	free(res);
	return (nsize);
}

/* int	main(void)
{
	int	n = 64531;

	ft_puthexupcase(n);
}*/
