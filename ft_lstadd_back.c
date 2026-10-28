/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:33:30 by yfarhat           #+#    #+#             */
/*   Updated: 2026/10/28 13:38:15 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;
    if (!new)
        return ;
    if (*lst != NULL|| lst != NULL)
    { 
        ptr = ft_lstlast(*lst);
        ptr->next = new;
    }
    *lst = new;
    new->next = NULL;
}