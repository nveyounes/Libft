/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:57:36 by username          #+#    #+#             */
/*   Updated: 2026/10/23 21:08:37 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_helper(char const *s, size_t i, size_t len)
{
	size_t	len_s;

	len_s = 0;
	while (len && s[i])
	{
		len_s++;
		len--;
		i++;
	}
	return (len_s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len_s;
	size_t	final_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	len_s = len_helper(s, start, len);
	if (len > len_s)
		final_len = len_s;
	else
		final_len = len;
	str = malloc(final_len + 1);
	if (!str)
		return (NULL);
	str[final_len] = '\0';
	ft_memcpy(str, s + start, final_len);
	return (str);
}
