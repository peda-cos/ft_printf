/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_ptr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 00:00:00 by peda-cos          #+#    #+#             */
/*   Updated: 2026/03/25 00:00:00 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ptr_content_len(void *ptr)
{
	if (!ptr)
		return (5);
	return (2 + ft_nbrlen_base((unsigned long)ptr, 16));
}

static int	print_ptr_core(void *ptr)
{
	int	count;

	if (!ptr)
		return (ft_putstr_fd("(nil)", 1));
	count = ft_putstr_fd("0x", 1);
	count += ft_putnbr_base((unsigned long)ptr, "0123456789abcdef", 16);
	return (count);
}

int	convert_ptr(t_fmt *fmt, va_list *ap)
{
	void	*ptr;
	int		len;
	int		count;

	ptr = va_arg(*ap, void *);
	len = ptr_content_len(ptr);
	count = 0;
	if (!fmt->flag_minus && fmt->width > len)
		count += ft_pad_width(fmt->width, len, ' ');
	count += print_ptr_core(ptr);
	if (fmt->flag_minus && fmt->width > len)
		count += ft_pad_width(fmt->width, len, ' ');
	return (count);
}
