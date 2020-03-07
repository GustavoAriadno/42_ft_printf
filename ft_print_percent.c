/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariadno <gariadno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 11:47:27 by gariadno          #+#    #+#             */
/*   Updated: 2020/03/07 15:21:40 by gariadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_percent(t_info *info, t_flags *flags)
{
	char c;

	c = (flags->flag == 1) ? '0' : ' ';
	if (flags->flag == 0)
		info->len += ft_putchar('%');
	while (flags->width-- > 1)
		info->len += ft_putchar(c);
	if (flags->flag != 0)
		info->len += ft_putchar('%');
}
