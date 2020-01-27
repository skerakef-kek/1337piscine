/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:41:52 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/09 18:09:48 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(int c);

void		ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = -1;
	while (++num1 <= 99)
	{
		num2 = num1;
		while (++num2 <= 99)
		{
			ft_putchar((num1 / 10) + '0');
			ft_putchar((num1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((num2 / 10) + '0');
			ft_putchar((num2 % 10) + '0');
			if (num1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
