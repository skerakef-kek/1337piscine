/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:40:55 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/20 10:44:16 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int r;

	i = 0;
	r = 1;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			r = 0;
		i++;
	}
	return (r);
}
