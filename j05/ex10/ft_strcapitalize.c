/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 23:35:19 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/20 10:28:16 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		lower_alph(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void		uper_alph(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
		lower_alph(&str[i++]);
	i = 0;
	while (str[i])
	{
		if (i == 0)
			uper_alph(&str[i]);
		if (str[i - 1] >= 32 && str[i - 1] <= 47)
			uper_alph(&str[i]);
		if (str[i - 1] >= 58 && str[i - 1] <= 64)
			uper_alph(&str[i]);
		if (str[i - 1] >= 91 && str[i - 1] <= 96)
			uper_alph(&str[i]);
		if (str[i - 1] >= 123 && str[i - 1] <= 126)
			uper_alph(&str[i]);
		i++;
	}
	return (str);
}
