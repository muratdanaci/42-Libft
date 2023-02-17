/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:33:50 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/25 13:16:16 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *c, int i, size_t len)
{
	unsigned char	*ptr;
	size_t			x;

	ptr = (unsigned char *)c;
	x = 0;
	while (len--)
	{
		ptr[x] = (unsigned char)i;
		x++;
	}
	return (c);
}
