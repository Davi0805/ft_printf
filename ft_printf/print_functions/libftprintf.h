/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelo-ca <dmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:51:56 by davi              #+#    #+#             */
/*   Updated: 2024/04/26 17:50:19 by dmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_puthexupcase(int n);
int	ft_putint(int n);
int	ft_putpercent(void);
int	ft_putstr(char *str);
int	ft_putunsint(int n);

#endif
