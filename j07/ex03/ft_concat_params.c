/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:53:25 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/22 23:24:23 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char		*ft_concat_params(int argc, char **argv)
{
	char	*arg;
	int		a;
	int		b;
	int		m;

	arg = malloc((argc) * sizeof(char));
	a = 1;
	m = 0;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			arg[m] = argv[a][b];
			b++;
			m++;
		}
		if ((a + 1) < argc)
			arg[m] = '\n';
		m++;
		a++;
	}
	arg[m - 1] = '\0';
	return (arg);
}
