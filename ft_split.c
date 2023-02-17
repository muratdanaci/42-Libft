/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:02:09 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/25 13:16:42 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_char_counter(char **str, char const *s, char c)
{
	char		**str1;
	char const	*s1;

	str1 = str;
	s1 = s;
	while (*s1)
	{
		while (*s == c)
			++s;
		s1 = s;
		while (*s1 && *s1 != c)
			++s1;
		if (*s1 == c || s1 > s)
		{
			*str1 = ft_substr(s, 0, s1 - s);
			s = s1;
			++str1;
		}
	}
	*str1 = NULL;
}

static int	ft_word_counter(char const *s, char sep)
{
	int	len;

	len = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++len;
		while (*s && *s != sep)
			++s;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	int		size;

	if (!s)
		return (NULL);
	size = ft_word_counter(s, c);
	newstr = (char **)malloc(sizeof(char *) * (size + 1));
	if (!newstr)
		return (NULL);
	ft_char_counter(newstr, s, c);
	return (newstr);
}
