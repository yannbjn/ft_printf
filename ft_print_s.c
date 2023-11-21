/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:51:01 by yabejani          #+#    #+#             */
/*   Updated: 2023/11/20 16:33:06 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(const char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	else
		return (write(1, str, ft_strlen(str)));
}
