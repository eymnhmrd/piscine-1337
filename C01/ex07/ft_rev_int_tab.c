/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 05:41:14 by ahamrad           #+#    #+#             */
/*   Updated: 2022/07/26 11:50:46 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cmpt;
	int	tmp;

	cmpt = 0;
	while (cmpt < size - 1)
	{
		tmp = tab[cmpt];
		tab[cmpt] = tab[size - 1];
		tab[size - 1] = tmp;
		cmpt++;
		size--;
	}
}	
