/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:48:14 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/22 21:08:29 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFT_H
# define PRINTFT_H

int	ft_putunbr_fd(unsigned int n, int fd);
int	ft_puthex_fd(unsigned int n, int uppercase, int fd);
int	ft_putptr_fd(unsigned long ptr, int fd);

#endif
