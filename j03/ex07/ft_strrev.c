/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 07:15:41 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/19 06:45:08 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strrev(char *str)
{
	char	c;
	int		m1;
	int		m2;

	m1 = 0;
	m2 = ft_strlen(str) - 1;
	while (m1 <= m2)
	{
		c = str[m2];
		str[m2] = str[m1];
		str[m1] = c;
		m1++;
		m2--;
	}
	return (str);
}
