/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 23:18:18 by username          #+#    #+#             */
/*   Updated: 2026/10/27 22:23:57 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	res = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
			i++;
		}
	}
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
int main()
{
	printf("Res : %i\n", ft_atoi("9999999999999999999999"));
	printf("Res : %i",      atoi("9999999999999999999999"));
}
*/
