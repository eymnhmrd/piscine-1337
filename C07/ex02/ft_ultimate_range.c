/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:53:34 by ahamrad           #+#    #+#             */
/*   Updated: 2022/08/11 03:57:33 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	ptr = malloc(sizeof(int) * (max - min));
	if (!ptr)
	{
		return (0);
	}
	while (min < max)
	{
		*(ptr + i) = min;
		min++;
		i++;
	}
	*range = ptr;
	return (i);
}
