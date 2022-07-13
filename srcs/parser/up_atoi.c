/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 06:08:45 by dcloud            #+#    #+#             */
/*   Updated: 2022/07/05 06:08:48 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

int	up_atoi(const char *str)
{
	int	num;

	while (*str == SPACE)
		++str;
	if (ft_isdigit(*str) == FALSE)
		return (-1);
	num = 0;
	while (ft_isdigit(*str) == TRUE)
		num = num * 10 + (*(str++) - '0');
	while (*str == SPACE)
		++str;
	if (*str != END_OF_LINE && *str != COMMA && *str != NEW_LINE)
		put_error(INVALID_COLOR_CHANNELS, ERR_COLOR_CHANNELS);
	return (num);
}
