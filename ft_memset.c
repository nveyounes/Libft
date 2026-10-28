/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:12:03 by username          #+#    #+#             */
/*   Updated: 2026/10/23 21:07:13 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	a;
	size_t			i;

	ptr = (unsigned char *) s;
	a = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = a;
		i++;
	}
	return (s);
}
