/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <mudanaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:42:40 by mudanaci          #+#    #+#             */
/*   Updated: 2023/01/20 18:07:35 by mudanaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*ptr;

	if (nmemb == UINTPTR_MAX || n == UINTPTR_MAX)
		return (NULL);
	ptr = (void *)malloc(nmemb * n);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * n);
	return (ptr);
}
