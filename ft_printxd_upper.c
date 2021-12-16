/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printXD.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:34:43 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/12/14 17:22:10 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printxd_upper(unsigned int x)
{
	char	*xd;

	xd = "0123456789ABCDEF";
	if (x > 15)
	{
		ft_printxd_upper(x / 16);
		ft_printxd_upper(x % 16);
	}
	else
	{
		ft_putchar(xd[x]);
	}
	return (ft_get_nb_len_un(x, 16));
}
