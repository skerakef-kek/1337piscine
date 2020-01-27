/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 10:39:08 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/20 10:40:27 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int r;

	i = 0;
	r = 1;
	while (str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			r = 0;
		i++;
	}
	return (r);
}