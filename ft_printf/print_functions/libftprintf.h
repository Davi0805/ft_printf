/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:51:56 by davi              #+#    #+#             */
/*   Updated: 2024/04/30 14:15:55 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include "../Libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_puthexupcase(unsigned int n);
int	ft_puthexlowcase(unsigned int n);
int	ft_putint(int n);
int	ft_putpercent(void);
int	ft_putstr(const char *str);
int	ft_putunsint(int n);
int	ft_putpointer(void *ptr);
//int	ft_printf(const char *format, ...);

#endif
