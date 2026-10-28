/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:40:41 by username          #+#    #+#             */
/*   Updated: 2026/10/23 21:07:22 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		x;
	const unsigned char	*ptr;
	size_t				i;

	x = (unsigned char) c;
	ptr = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == x)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
