/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:24:31 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/22 22:05:01 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_argument(unsigned char *c)
{
	if (arg[i] == '%')
	{
		i++;
		if (arg[i] == 'c')
			ft_putchar_fd(char c, fd);
		else if (arg[i] == 's')
			ft_putstr(char *s, fd);
		else if (arg[i] == 'p')
			ft_putptr_fd(unsigned long ptr, int fd);
		else if (arg[i] == 'i' || arg[i] == 'd')
			ft_putnbr(int n, fd);
		else if (arg[i] == 'u')
			ft_putunbr_fd(unsigned int n, int fd);
		else if (arg[i] == 'x' || arg[i] == 'X')
			ft_puthex_fd(unsigned int n, int uppercase, int fd);
		else
			ft_putchar_fd('%', fd);
	}
}
