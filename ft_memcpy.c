/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:42:41 by mel-yous          #+#    #+#             */
/*   Updated: 2022/10/21 13:12:51 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	ptrd = (unsigned char *)dst;
	ptrs = (unsigned char *)src;
	if (ptrd == NULL && ptrs == NULL)
		return (NULL);
	while (n > 0)
	{
		*ptrd++ = *ptrs++;
		n--;
	}
	return (dst);
}
