/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:48:14 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/22 23:06:47 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFT_H
# define PRINTFT_H

#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_process_format(const char *format, va_list args, int *i);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putunbr_fd(unsigned int n, int fd);
int	ft_puthex_fd(unsigned int n, int uppercase, int fd);
int	ft_putptr_fd(unsigned long ptr, int fd);

#endif
