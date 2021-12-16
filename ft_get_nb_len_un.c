/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nb_len_un.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:33:12 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/12/15 13:37:07 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_nb_len_un(unsigned int nb, int base)
{
	int	len_nb_un;

	len_nb_un = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= base;
		len_nb_un++;
	}
	return (len_nb_un);
}
