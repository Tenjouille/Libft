/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:57:42 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/20 16:32:05 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

// int	main(void)
// {
// 	t_list *l = ft_lstnew(strdup("nyacat"));
// 	t_list *n = ft_lstnew(strdup("OK"));

// 	ft_lstadd_back(&l, n);
// 	if (l->next == n && !strcmp(l->next->content, "OK"))
// 		printf("OK\n");
// 	return (0);
// }