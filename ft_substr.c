/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:59:00 by mel-yous          #+#    #+#             */
/*   Updated: 2022/10/24 14:58:10 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptrsub;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s) || *s == '\0')
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len--;
	ptrsub = (char *)malloc((len + 1) * sizeof(char));
	if (ptrsub == NULL)
		return (NULL);
	while (i < len)
	{
		ptrsub[i] = s[start + i];
		i++;
	}
	ptrsub[i] = '\0';
	return (ptrsub);
}
