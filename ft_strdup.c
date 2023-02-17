/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:08:22 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/25 13:16:54 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*newstr;

	len = ft_strlen(str);
	newstr = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (newstr == NULL)
		return (NULL);
	len = 0;
	while (*str)
	{
		newstr[len] = *str;
		str++;
		len++;
	}
	newstr[len] = '\0';
	return (newstr);
}
