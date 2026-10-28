/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 12:52:22 by yfarhat           #+#    #+#             */
/*   Updated: 2026/10/25 15:23:03 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_helper(long nb)
{
	size_t	count;

	count = 0;
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static char	*ft_filling(char *dst, long nb, size_t count, int sign)
{
	size_t	offset;

	if (sign < 0)
		offset = 1;
	else
		offset = 0;
	while (count > offset)
	{
		count--;
		dst[count] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	count;
	char	*str;
	int		sign;

	sign = 1;
	nb = n;
	count = ft_len_helper(nb);
	if (nb == 0 || nb < 0)
	{
		if (nb < 0)
		{
			nb = -nb;
			sign = sign * -1;
		}
		count++;
	}
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	if (sign == -1)
		str[0] = '-';
	ft_filling(str, nb, count, sign);
	str[count] = '\0';
	return (str);
}


