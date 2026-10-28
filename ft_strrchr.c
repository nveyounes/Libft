/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:29:37 by yfarhat           #+#    #+#             */
/*   Updated: 2026/10/15 17:00:01 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char    *last = NULL;
    unsigned char  x;

    x = (unsigned char)c;
    i = 0;

    while (s[i])
    {
        if (s[i] == x)
            last = (char *)(s + i);
        i++;
    }
    if (s[i] == x)
        return ((char *)(s + i));
    return (last);
}