/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:01:29 by ahamrad           #+#    #+#             */
/*   Updated: 2022/08/11 03:43:00 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	output = malloc(sizeof(char) * ft_total_len(size, strs, sep) + 1);
	if (!output)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			output[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				output[k++] = sep[j++];
		i++;
	}
	output[k] = '\0';
	return (output);
}
