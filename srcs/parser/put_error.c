/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 06:08:32 by dcloud            #+#    #+#             */
/*   Updated: 2022/07/05 06:08:34 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	put_error(const char *message, int error_status)
{
	write(2, NAME, ft_strlen(NAME));
	write(2, ": ", 2);
	write(2, ERROR, ft_strlen(ERROR));
	write(2, ": ", 2);
	write(2, message, ft_strlen(message));
	write(2, "\n", 1);
	exit(error_status);
}

void	put_error_and_arg(char *arg, char *message, int error_status)
{
	write(2, NAME, ft_strlen(NAME));
	write(2, ": ", 2);
	write(2, ERROR, ft_strlen(ERROR));
	write(2, ": ", 2);
	write(2, arg, ft_strlen(arg));
	write(2, ": ", 2);
	write(2, message, ft_strlen(message));
	write(2, "\n", 1);
	exit(error_status);
}
