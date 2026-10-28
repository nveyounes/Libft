/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:29:43 by yfarhat           #+#    #+#             */
/*   Updated: 2026/10/27 19:52:35 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count(long nb)
{
    int count;
    
    count = 0;
    if (nb == 0)
    {
        count++;
        return (count);
    }
    if (nb < 0)
    { 
        count++;
        nb = -nb;
    }
    while (nb > 0)
    {
        nb = nb / 10;
        count++;
    }
    return (count);
}
static void ft_filling(char *ptr_dst, long nb, int sign, int count)
{
    int backup;
    int offset;
    
    backup = count;
    if (nb == 0)
    {
        ptr_dst[0] = '0';
        ptr_dst[count] = '\0';
        return ;
    }
    if (sign > 0)
        offset = 0;
    else
    {
        offset = 1;
        ptr_dst[0] = '-';
    }
    while (count > offset)
    {
        count--;
        ptr_dst[count] = (nb % 10) + '0';
        nb = nb / 10;
    }
    ptr_dst[backup] = '\0';
}
void ft_putnbr_fd(int n, int fd)
{
    long nb;
    int count;
    int sign;
    char buff[12];

    sign = 1;
    nb = n;
    count = ft_count(nb);
    if (nb < 0)
    {
        nb = -nb;
        sign *= -1;
    }
    ft_filling(buff, nb, sign, count);
    ft_putstr_fd(buff, fd);    
}
