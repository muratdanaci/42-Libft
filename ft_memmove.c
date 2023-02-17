/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:10:11 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/25 13:29:09 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dest;
	char		*source;
	size_t		i;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dest > source)
		while (++i <= n)
			dest[n - i] = source[n - i];
	else
		return (ft_memcpy(dst, src, n));
	return (dst);
}
