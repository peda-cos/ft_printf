/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:04:45 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/22 21:23:50 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putunbr_fd(n / 10, fd);
	count += ft_putchar_fd((n % 10) + '0', fd);
	return (count);
}

int	ft_puthex_fd(unsigned int n, int uppercase, int fd)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex_fd(n / 16, uppercase, fd);
	count += ft_putchar_fd(base[n % 16], fd);
	return (count);
}

int	ft_putptr_fd(unsigned long ptr, int fd)
{
	int	count;

	count = 0;
	if (ptr >= 16)
		count += ft_putptr_fd(ptr / 16, fd);
	count += ft_putchar_fd("0123456789abcdef"[ptr % 16], fd);
	return (count);
}
