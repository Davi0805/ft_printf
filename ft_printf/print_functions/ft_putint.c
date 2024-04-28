/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:45:35 by dmelo-ca          #+#    #+#             */
/*   Updated: 2024/04/28 17:17:09 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include "libftprintf.h"

int	ft_putint(int n)
{
	char	*p;
	size_t	len;

	p = ft_itoa(n);
	len = ft_strlen(p);
	write(1, p, len);
	free(p);
	return (len);
}
