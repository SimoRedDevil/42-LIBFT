/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:01:32 by mel-yous          #+#    #+#             */
/*   Updated: 2022/10/19 08:44:44 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ncount(long n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	a;
	size_t	sz;
	char	*ptr;

	a = n;
	sz = ft_ncount(a);
	ptr = (char *)malloc(sz + 1);
	if (ptr == 0)
		return (0);
	ptr[sz] = '\0';
	if (a == 0)
		ptr[0] = '0';
	if (a < 0)
	{
		ptr[0] = '-';
		a *= -1;
	}
	while (a > 0)
	{
		ptr[sz - 1] = (a % 10) + 48;
		a /= 10;
		sz--;
	}
	return (ptr);
}
