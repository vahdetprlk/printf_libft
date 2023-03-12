/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:37:30 by vparlak           #+#    #+#             */
/*   Updated: 2023/03/12 19:12:07 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_any(va_list args, char *format)
{
	if (!ft_strncmp(format, "%c", 2))
		ft_putchar_fd(va_arg(args, int), 1);
	if (!ft_strncmp(format, "%s", 2))
		ft_putstr_fd(va_arg(args, char *), 1);
	if (!ft_strncmp(format, "%d", 2) || !ft_strncmp(format, "%i", 2))
		ft_putnbr_fd(va_arg(args, int), 1);
	if (!ft_strncmp(format, "%p", 2))
	{
		ft_putstr_fd("0x", 1);
		ft_puthex_fd(va_arg(args, unsigned long), 1);
	}

	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (!ft_strncmp(format, "%c", 2) || !ft_strncmp(format, "%s", 2)
			|| !ft_strncmp(format, "%p", 2) || !ft_strncmp(format, "%d", 2)
			|| !ft_strncmp(format, "%i", 2) || !ft_strncmp(format, "%u", 2)
			|| !ft_strncmp(format, "%x", 2) || !ft_strncmp(format, "%X", 2)
			|| !ft_strncmp(format, "%%", 2))
		{
			ft_print_any(args, (char *)format);
			format++;
		}
		else if (ft_strncmp(format, "%", 1))
			format++;
		else
			ft_putchar_fd(*format, 1);
		format++;
	}
	return (0);
}
