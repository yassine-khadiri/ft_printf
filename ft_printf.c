/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 13:06:31 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/12/16 18:01:31 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_res(va_list argptr, char c)
{
	int	rslt;

	rslt = 0;
	if (c == 'c')
		rslt = ft_putchar(va_arg(argptr, int));
	else if (c == 's')
		rslt = ft_putstr(va_arg(argptr, char *));
	else if (c == 'p')
		rslt = ft_putaddr(va_arg(argptr, unsigned long int));
	else if (c == 'u')
		rslt = ft_putnbr_un(va_arg(argptr, int));
	else if (c == 'x')
		rslt = ft_printxd_lower(va_arg(argptr, unsigned int));
	else if (c == 'X')
		rslt = ft_printxd_upper(va_arg(argptr, unsigned int));
	else if (c == 'd' || c == 'i')
		rslt = ft_putnbr(va_arg(argptr, int));
	else
		rslt = ft_putchar(c);
	return (rslt);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	argptr;

	va_start(argptr, format);
	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_get_res(argptr, format[i]);
		}
		else
		{
			if (format[i] == '\0')
				return (len);
			len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(argptr);
	return (len);
}
