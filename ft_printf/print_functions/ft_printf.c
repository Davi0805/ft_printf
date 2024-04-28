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

int	ft_printf(const char *format, ...)
{
	int argc;
	int	check;

	argc = countargc(format);
	if (argc == 0)
	{
		ft_putstr(format);
		return (0);
	}
	va_list ap;

	va_start(ap, argc);
	

}

int	main(void)
{
	ft_printf("Ola, eu sou Davi. Tenho 20 anos!");
}
