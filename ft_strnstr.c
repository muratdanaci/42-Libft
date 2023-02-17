/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:54:47 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/25 13:19:24 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (*s2 == 0)
		return ((char *)s1);
	if (!n)
		return (NULL);
	while (s1[i] != 0 && i < n)
	{
		x = 0;
		while ((s1[i + x] == s2[x]) && (s2[x] != 0 && x + i < n))
			x++;
		if (s2[x] == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
