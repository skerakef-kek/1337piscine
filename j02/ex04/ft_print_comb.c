/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:45:38 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/10 04:50:30 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_writenum(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void		ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_writenum(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}
