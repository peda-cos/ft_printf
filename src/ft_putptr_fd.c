/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:04:45 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/22 22:48:54 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printft.h"

int	ft_putptr_fd(unsigned long ptr, int fd)
{
	int	count;

	count = 0;
	if (ptr >= 16)
		count += ft_putptr_fd(ptr / 16, fd);
	count += ft_putchar_fd("0123456789abcdef"[ptr % 16], fd);
	return (count);
}
