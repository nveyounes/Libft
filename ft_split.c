/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:16:17 by yfarhat           #+#    #+#             */
/*   Updated: 2026/10/25 12:48:51 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_count_words(char const *s, char c)
{
    size_t  i;
    size_t count;
    size_t word;

    word = 0;
    count = 0;
    i = 0;
    while(s[i])
    {
        if (s[i] != c && word == 0)
        {
            word = 1;
            count++;
        }
        if (s[i] == c && word == 1)
            word = 0;
        i++;    
    }
    return (count);
}

//size_t 


char **ft_split(char const *s, char c)
{
    size_t word_counts;
    char **arr;
    size_t i;
    size_t current_len;
    char *word_start;
    
    i = 0;
    current_len = 0;
    word_counts = ft_count_words(s, c);
    arr = malloc(sizeof(char *) * (word_counts + 1));
    while (s[i])
    {
        if (s[0] != c)
        {
            current_len = ft_len_helper(&s[i], c);
            word_start = &s[i];
        }
        else if (s[i] != c && s[i - 1] == c)
        { 
            current_len = ft_len_helper(&s[i], c);
            word_start = &s[i];
        }
    }
}

#include <stdio.h>
int main()
{
    char *str= "hello---Hello-----HI-----h------h-h";
    char c = '-';

    size_t res;
    res = ft_count_words(str, c);
    printf("%ld", res);
    return 0;
}
