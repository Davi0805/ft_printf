#include <stdarg.h>
#include "../Libft/libft.h"
#include "libftprintf.h"

int	countargc(const char *format)
{
	char *flags;
	int	i;
	int j;
	int contador;

	i = 0;
	contador = 0;
	flags = "cspdiuxX%";
	while (format[i])
	{
		j = 0;
		if (format[i] == '%')
			while (flags[j])
			{
				if (format[i + 1] == flags[j])
				{
					contador++;
					break;
				}
				j++;
			}
		i++;
	}
	return (contador);
}

int	percputstr(const char *format)
{
	int	i;

	i = 0;
	while (format[i] || format[i] != '%')
	{
		write(1, &format[i], 1);
		i++;
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int argc;
	int	check;
	va_list ap;
	int	numchar = 0;
	int i = 0;

	argc = countargc(format);
	if (argc == 0)
	{
		numchar = ft_putstr(format);
		return (0);
	}
	va_start(ap, format);
	i = percputstr(format) + 1;
		check = va_arg(ap, int);
		numchar += ft_putchar(check);
	va_end(ap);
	return (numchar);
}

int	main(void)
{
	char teste;

	teste = 'D';
	ft_printf("Ola, eu sou Davi. Tenho 20 anos!", teste);
}
