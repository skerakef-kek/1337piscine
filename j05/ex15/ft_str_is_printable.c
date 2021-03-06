/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:27:00 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/20 12:29:11 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int r;

	i = 0;
	r = 1;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			r = 0;
		i++;
	}
	return (r);
}
