/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlowcase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:26:26 by dmelo-ca          #+#    #+#             */
/*   Updated: 2024/04/30 09:22:00 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include "libftprintf.h"

int	digitosl(int n)
{
	int	nsize;

	while (n != 0)
	{
		n /= 16;
		nsize++;
	}
	return (nsize);
}

char	*inttohexl(int n, int nsize)
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
			res[i++] = tempn + 87;
		n /= 16;
	}
	res[i] = '\0';
	return (res);
}

int	ft_puthexlowcase(int n)
{
	char	*res;
	int		nsize;
	int		i;
	int		len;
	char	tempchar;

	nsize = digitosl(n);
	res = inttohexl(n, nsize);
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

/*int	main(void)
{
	int	n = 64531;

	ft_puthexupcase(n);
}*/
