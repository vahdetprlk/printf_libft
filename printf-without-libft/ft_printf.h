/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:05:19 by vparlak           #+#    #+#             */
/*   Updated: 2023/03/14 12:04:57 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_print_any(va_list args, char *format, int *count);
void	ft_print_any_2(va_list args, char *format, int *count);
char	*ft_check_specifier(const char *format, va_list args, int *count);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(long n, int fd);
int		ft_puthex_fd(unsigned long hex, int fd, int is_upper);

#endif
