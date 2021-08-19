/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvictor- <jvictor-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:47:41 by jvictor-          #+#    #+#             */
/*   Updated: 2021/08/18 22:37:42 by jvictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

size_t	print_putstr(char *c)
{
	int	i;

	if (!c)
		return (write(1, "(null)", 6));
	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}
