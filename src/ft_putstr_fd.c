/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:29:03 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/22 23:07:57 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	int	count;
	int	i;

	if (!s)
		return (ft_putstr_fd("(null)", fd));
	count = 0;
	i = 0;
	while (s[i])
	{
		count += ft_putchar_fd(s[i], fd);
		i++;
	}
	return (count);
}
