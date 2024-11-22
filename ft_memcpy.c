/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytalai <ytalai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 04:26:55 by ytalai            #+#    #+#             */
/*   Updated: 2024/11/22 00:07:50 by ytalai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*tpr;
	char		*ptr;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return ((void *)src);
	ptr = (char *)dst;
	tpr = (const char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = tpr[i];
		i++;
	}
	return (dst);
}
