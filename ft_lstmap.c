/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:48:22 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/20 17:32:53 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;

	if (!lst || !del || !f)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	start = new;
	while (lst)
	{
		if (!new)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		new->next = ft_lstnew((*f)(lst->content));
		new = new->next;
		lst = lst->next;
	}
	new->next = NULL;
	return (start);
}
