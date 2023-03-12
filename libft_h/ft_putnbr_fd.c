/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 04:44:49 by vparlak           #+#    #+#             */
/*   Updated: 2023/03/12 18:35:35 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	long		nbr;
	static int	count = 0;

	nbr = (long)n;
	if (nbr < 0)
	{
		nbr = -nbr;
		count += ft_putchar_fd('-', fd);
	}
	if (nbr < 10)
		count += ft_putchar_fd(nbr + '0', fd);
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	return (count);
}
