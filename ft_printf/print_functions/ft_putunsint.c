/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:46:24 by dmelo-ca          #+#    #+#             */
/*   Updated: 2024/05/01 10:48:11 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Libft/libft.h"
#include "ft_printf.h"

int	ft_putunsint(int n)
{
	char	*p;
	size_t	len;

	if (n < 0)
		n *= -1;
	p = ft_itoa(n);
	len = ft_strlen(p);
	write(1, &p, len);
	free(p);
	return (len);
}
