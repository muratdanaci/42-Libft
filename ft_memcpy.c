/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:47:42 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/25 13:15:39 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*str;
	char	*src1;
	size_t	n;

	str = (char *)dst;
	src1 = (char *)src;
	n = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n < len)
	{
		str[n] = src1[n];
		n++;
	}
	return (dst);
}
