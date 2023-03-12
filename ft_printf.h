/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:05:19 by vparlak           #+#    #+#             */
/*   Updated: 2023/03/12 22:03:01 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft_h/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_print_any(va_list args, char *format, int *count);
void	ft_print_any_2(va_list args, char *format, int *count);
char	*ft_check_specifier(const char *format, va_list args, int *count);

#endif
