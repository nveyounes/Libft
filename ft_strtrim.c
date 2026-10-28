/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:34:55 by yfarhat           #+#    #+#             */
/*   Updated: 2026/10/27 19:33:00 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s, char const *set)
{
    char *str;
    size_t start;
    size_t end;

    if (!s || !set)
        return (NULL);
    end = ft_strlen(s);
    start = 0;
    if (end > 0)
    { 
        end--;
        while(s[start] && ft_strchr(set, s[start]))
            start++;
        while(end > start && ft_strchr(set, s[end]))
            end--;
    }
    if (start > end) // important to catch a negative value
        return (ft_strdup(""));
    str = ft_substr(s, start, end - start + 1);
    return (str);  
}
