/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:30:19 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/25 13:15:17 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int i, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	i = (unsigned char)i;
	while (len && *s != i)
	{
		++s;
		--len;
	}
	if (len)
		return ((void *)s);
	else
		return (NULL);
}
