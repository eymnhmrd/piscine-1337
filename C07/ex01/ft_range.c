/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:01:28 by ahamrad           #+#    #+#             */
/*   Updated: 2022/08/07 21:40:33 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_array_size(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (-1);
	while (min < max)
	{
		min++;
		i++;
	}
	return (i);
}	

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	i = 0;
	len = ft_array_size(min, max);
	if (len < 0)
		return (0);
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
