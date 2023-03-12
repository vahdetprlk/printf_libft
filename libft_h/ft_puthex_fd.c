/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:46:30 by vparlak           #+#    #+#             */
/*   Updated: 2023/03/12 19:02:55 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_fd(unsigned long hex, int fd)
{
	static int	count = 0;

	if (hex < 16)
		count += write(fd, &"0123456789abcdef"[hex % 16], 1);
	if (hex >= 16)
	{
		ft_puthex_fd(hex / 16, fd);
		ft_puthex_fd(hex % 16, fd);
	}
	return (count);
}
