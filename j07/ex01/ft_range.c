/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:22:17 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/23 10:20:37 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;

	if (min >= max)
	{
		range = 0;
		return (range);
	}
	if (!(range = malloc(sizeof(int) * (max - min))))
		return (0);
	while (max >= min)
	{
		range[max - min - 1] = max - 1;
		max--;
	}
	return (range);
}
