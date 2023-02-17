/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:57:55 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/25 13:18:53 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	dstlen;
	size_t	i;

	if (len == 0)
		return (ft_strlen(src));
	dstlen = 0;
	while (dst[dstlen] != '\0' && dstlen < len)
		dstlen++;
	i = dstlen;
	while (src[dstlen - i] && dstlen + 1 < len)
	{
		dst[dstlen] = src[dstlen - i];
		dstlen++;
	}
	if (i < len)
		dst[dstlen] = '\0';
	return (i + ft_strlen(src));
}
