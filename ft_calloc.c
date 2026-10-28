/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:29:22 by username          #+#    #+#             */
/*   Updated: 2026/10/23 21:07:39 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elements, size_t size)
{
	void	*ptr;
	size_t	res;

	res = elements * size;
	if (res / elements != size)
		return (NULL);
	ptr = malloc(res);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, res);
	return (ptr);
}
