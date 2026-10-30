/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarhat <yfarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:34:22 by yfarhat           #+#    #+#             */
/*   Updated: 2026/10/29 18:34:06 by yfarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *backup;
    
    if (!del || !lst)
        return ;
    while (*lst != NULL)
    {
        backup = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = backup;
    }
}