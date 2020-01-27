/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:49:17 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/21 12:52:51 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (i);
}
