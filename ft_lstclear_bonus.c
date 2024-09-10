/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoan <hyeoan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:37:15 by hyeoan            #+#    #+#             */
/*   Updated: 2022/11/20 21:32:07 by hyeoan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*free_node;

	while (*lst != NULL)
	{
		free_node = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(free_node);
		free_node = NULL;
	}
}
