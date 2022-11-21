/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:05:10 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/20 15:56:28 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	*lst = new;
	new->next = tmp;
}

// int	main(void)
// {
// 	t_list	*first = ft_lstnew("fils");
// 	t_list	*new = ft_lstnew("OK");
// 	ft_lstadd_front(&first, new);
// 	printf("Le contenue de la liste 1 : %p\n", new->next);
// 	return (0);
// }