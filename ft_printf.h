/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 13:10:18 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/12/15 15:16:11 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putaddr(unsigned long x);
int	ft_putnbr(int n);
int	ft_get_nb_len(int nb);
int	ft_putnbr_un(unsigned int n);
int	ft_get_nb_len_un(unsigned int nb, int base);
int	ft_printxd_upper(unsigned int x);
int	ft_printxd_lower(unsigned int x);
#endif
