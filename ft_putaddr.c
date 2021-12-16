/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:27:28 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/12/15 15:24:29 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_nb_len_un1(unsigned long nb)
{
	int	len_nb_un;

	len_nb_un = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 16;
		len_nb_un++;
	}
	return (len_nb_un);
}

void	ft_printxd_lower_l(unsigned long x)
{
	char	*xd;

	xd = "0123456789abcdef";
	if (x > 15)
	{
		ft_printxd_lower_l(x / 16);
		ft_printxd_lower_l(x % 16);
	}
	else
	{
		ft_putchar(xd[x]);
	}
}

int	ft_putaddr(unsigned long x)
{
	ft_putstr("0x");
	ft_printxd_lower_l(x);
	return (ft_get_nb_len_un1(x) + 2);
}
