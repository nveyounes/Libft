/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:47:32 by yfarhat           #+#    #+#             */
/*   Updated: 2026/10/24 20:59:47 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_1;
    size_t len_2;
    char *str;

    if (!s1 || !s2)
        return (NULL);
    len_1 = ft_strlen(s1);
    len_2 = ft_strlen(s2);
    str = malloc(len_1 + len_2 + 1);
    if (!str)
        return (NULL);
    ft_memcpy(str, s1, len_1);
    ft_memcpy(str + len_1, s2, len_2);
    str[len_1 + len_2] = '\0';  
    return (str);
}