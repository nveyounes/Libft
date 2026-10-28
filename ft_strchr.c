/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:20:20 by username          #+#    #+#             */
/*   Updated: 2026/10/24 16:11:29 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	x;

	i = 0;
	x = (char) c;
	while (s[i])
	{
		if (s[i] == x)
			break ;
		i++;
	}
	if (s[i] == x)
		return ((char *)(s + i));
	return (NULL);
}
