/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:34:21 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/20 16:47:55 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// int	main(void)
// {
// 	t_list *l = ft_lstnew("tripouille");

// 	l->next = ft_lstnew("#TEST#");
// 	ft_lstclear(&l, del);
// 	if (!l)
// 		printf("OK");
// 	printf("%s", (char *)l->content);
// }