/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:48:55 by yabejani          #+#    #+#             */
/*   Updated: 2023/11/20 17:03:54 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_print_di(int nbr);
int	ft_print_u(unsigned int nbr);
int	ft_print_s(const char *str);
int	ft_print_p(void *ptr);
int	ft_print_xx(unsigned int nbr, int flag);
int	ft_printf(const char *form, ...);

#endif
