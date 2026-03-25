/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_write_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 00:00:00 by peda-cos          #+#    #+#             */
/*   Updated: 2026/03/25 00:00:00 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_putchar_fd(char c, int fd)
{
	return ((int)write(fd, &c, 1));
}

int	ft_putstr_fd(const char *s, int fd)
{
	if (!s)
		return (0);
	return ((int)write(fd, s, ft_strlen(s)));
}

int	ft_putstr_n(const char *s, int n)
{
	if (!s || n <= 0)
		return (0);
	return ((int)write(1, s, n));
}

int	ft_pad_width(int total_width, int content_len, char fill)
{
	int	count;
	int	pad;

	count = 0;
	pad = total_width - content_len;
	while (pad > 0)
	{
		count += ft_putchar_fd(fill, 1);
		pad--;
	}
	return (count);
}
