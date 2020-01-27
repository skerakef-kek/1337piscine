/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:33:17 by ztaouil           #+#    #+#             */
/*   Updated: 2019/07/22 21:04:35 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_blank(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	else
		return (0);
}

char	**allocation(char *str, int word_count, int i, int j)
{
	char**arr;

	arr = (char**)malloc(sizeof(char *) * (word_count + 1));
	if (*str == '\0' && ((arr[0] = 0) || 1))
		return (arr);
	while (is_blank(*str))
		str++;
	while (*str)
	{
		if (is_blank(*str))
		{
			arr[i++] = (char*)malloc(sizeof(char) * (j + 1));
			while ((j = 0) || is_blank(*str))
				str++;
			str--;
		}
		else
			j++;
		if (*(str++ + 1) == '\0')
			arr[i] = (char*)malloc(sizeof(char) * (j + 1));
	}
	if (!(is_blank(*(str - 1))))
		i++;
	arr[i] = 0;
	return (arr);
}

int		countwords(char *str)
{
	int	t;
	int	wc;

	t = 1;
	wc = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			t = 1;
		else if (t == 1)
		{
			t = 0;
			wc++;
		}
		str++;
	}
	return (wc);
}

char	**ft_split_whitespaces(char *str)
{
	int		a;
	int		b;
	int		wc;
	char	**tab;

	a = 0;
	b = 0;
	wc = countwords(str);
	tab = allocation(str, wc, 0, 0);
	while (a < wc)
	{
		if (is_blank(*str))
		{
			while (is_blank(*str))
				str++;
			tab[a][b] = '\0';
			a += (b != 0) ? 1 : 0;
			b = 0;
		}
		else
			tab[a][b++] = *str++;
	}
	return (tab);
}
