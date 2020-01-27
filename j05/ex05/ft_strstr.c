/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:38:49 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/20 10:28:46 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			cmp(char *str, char *to_find)
{
	int i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (to_find[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strstr(char *str, char *to_find)
{
	char *p;

	p = str;
	while (*p != '\0')
	{
		if (cmp(p, to_find))
			return (p);
		p++;
	}
	return (0);
}
