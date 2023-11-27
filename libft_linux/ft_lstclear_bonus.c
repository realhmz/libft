/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:23:17 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/12 15:23:17 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	head = *lst;
	if (!lst || !del)
		return ;
	while (head)
	{
		*lst = head->next;
		del(head->content);
		free(head);
		head = *lst;
	}
	*lst = NULL;
}
