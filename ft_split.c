/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:50:06 by mel-yous          #+#    #+#             */
/*   Updated: 2022/10/24 15:02:27 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_wc(char const *str, char sep)
{
    size_t  i;
    size_t  len;
    size_t  count;

    i = 0;
    count = 0;
    if (str != 0)
    {
        len = ft_strlen(str);
        while (i < len)
        {
            while (str[i] == sep)
                i++;
            if (str[i] != sep && str[i] != '\0')
                count++;
            while (str[i] != sep && str[i] != '\0')
                i++;
        }
    }
    return (count);
}

static char **ft_free(char **ptr, size_t i)
{
    size_t    j;

    j = 0;
    while (j < i)
    {
        free(ptr[j]);
        j++;
    }
    free(ptr);
    return (0);
}

char **ft_split(char const *s, char c)
{
    char **spl;
    size_t start;
    size_t end;
    size_t i;
    
    start = 0;
    i = 0;
    spl = (char **)malloc((ft_wc(s, c) + 1) * sizeof(char *));
    if (!spl)
        return (0);
    while (i < ft_wc(s, c))
    {
        while(s[start] == c && s[start] != '\0')
            start++;
        end = start;
        while (s[end] != c && s[end] != '\0')
            end++;
        spl[i] = ft_substr(s, start, end - start);
        if (spl[i] == 0)
            return (ft_free(spl, i));
        start = end;
        i++;
    }
    spl[i] = 0;
    return (spl);
}