/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:01:57 by username          #+#    #+#             */
/*   Updated: 2026/10/23 21:07:15 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	ptr_dst = (unsigned char *) dst;
	ptr_src = (const unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (ptr_dst > ptr_src)
	{
		while (len--)
			ptr_dst[len] = ptr_src[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
