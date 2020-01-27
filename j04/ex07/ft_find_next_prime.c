/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 02:59:30 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/14 04:07:27 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int d;
	int r;

	d = 2;
	r = 1;
	if (nb < 2)
		return (0);
	if (nb >= 2)
	{
		while (nb > d)
		{
			if (nb % d == 0)
				r = 0;
			d++;
		}
	}
	else
		r = 0;
	return (r);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
