/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 22:30:23 by yfarhat           #+#    #+#             */
/*   Updated: 2026/10/27 22:50:19 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    while (lst != NULL)
    {
        if (lst->next == NULL)
            return (lst);
        lst = lst->next;
    }
    return (lst);
}