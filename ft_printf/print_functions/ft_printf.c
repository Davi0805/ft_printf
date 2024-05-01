/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davi <davi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:17:34 by davi              #+#    #+#             */
/*   Updated: 2024/05/01 10:47:20 by davi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "./Libft/libft.h"
#include "ft_printf.h"

int	flagchecker(char *flags, char c)
{
	int	i;

	i = 0;
	while (flags[i] != '\0')
	{
		if (flags[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	printputstr(va_list ap, const char *format, int i)
{
	if (format[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (format[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (format[i + 1] == 'p')
		return (ft_putpointer(va_arg(ap, void *)));
	else if (format[i + 1] == 'd')
		return (ft_putint(va_arg(ap, int)));
	else if (format[i + 1] == 'i')
		return (ft_putint(va_arg(ap, int)));
	else if (format[i + 1] == 'u')
		return (ft_putunsint(va_arg(ap, unsigned int)));
	else if (format[i + 1] == 'x')
		return (ft_puthexlowcase(va_arg(ap, unsigned int)));
	else if (format[i + 1] == 'X')
		return (ft_puthexupcase(va_arg(ap, unsigned int)));
	else if (format[i + 1] == '%')
		return (ft_putpercent());
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int	numchar;
	int i;

	i = 0;
	va_start(ap, format);
	while(format[i])
	{
		if (format[i] == '%' && flagchecker("cspdiuxX%", format[i + 1]) == 1)
		{
			numchar += printputstr(ap, format, i);
			i++;
		}
		else
			numchar += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (numchar);
}

// int	main(void)
// {
// 	char letra;
// 	char *nome = (char *)malloc(sizeof(char) * 5);
// 	int	idade;
// 	int ano;

// 	nome = "Davi";
// 	idade = 20;
// 	ano = 2004;
// 	letra = 'D';
// 	//ft_putpointer(nome);
// 	//ft_printf("%X", ano);
// 	ft_printf("Eu sou %s.\nTenho %i anos.\nA primeira letra do meu nome e %c.\nO endereco do meu nome e %p.\nO ano do meu nascimento em hexadecimal e (%x|%X).\nQuando existir duas porcentagens seguidas deve printar %%\n", nome, idade, letra, nome, ano, ano);
// 	//printf("Ola, eu sou %s. Tenho %i anos. A primeira letra do meu nome e %c. O endereco do meu nome e %p. O ano do meu nascimento em hexadecimal e (%x|%X)\n", nome, idade, letra, nome, ano, ano);

// 	return 0;
// }
