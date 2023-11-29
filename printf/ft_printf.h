/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moajili <moajili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:00 by ajordan-          #+#    #+#             */
/*   Updated: 2023/11/29 16:48:06 by moajili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *format, ...) \
__attribute__ ((format (printf, 1, 2)));
int		ft_type(va_list args, const char format);
int		ft_putchr(unsigned int c);
int		ft_print_ptr(unsigned long long ptr);
int		ft_putnbr(int n);
int		ft_uprint(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_percent(void);
int	    ft_putstr( char *str);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned int num);

#endif
