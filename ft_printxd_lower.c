/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printXD_Lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:30:59 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/12/14 17:29:51 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printxd_lower(unsigned int x)
{
	char	*xd;

	xd = "0123456789abcdef";
	if (x > 15)
	{
		ft_printxd_lower(x / 16);
		ft_printxd_lower(x % 16);
	}
	else
	{
		ft_putchar(xd[x]);
	}
	return (ft_get_nb_len_un(x, 16));
}
