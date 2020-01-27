/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 02:24:39 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/14 06:38:09 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else
	{
		if (index == 1)
			return (1);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
