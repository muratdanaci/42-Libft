/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:09:59 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/25 13:16:46 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	char	*dst;

	dst = (char *)str;
	while (*dst)
	{
		if (*dst == (unsigned char)i)
			return (dst);
		dst++;
	}
	if (i == 0)
		return (dst);
	return (NULL);
}
