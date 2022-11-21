/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:16:38 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/19 17:01:06 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int	main(int ac, char **av)
// {
// 	t_list	**first;
// 	t_list	*S1;
// 	t_list	*S2;
// 	t_list	*S3;
// 	t_list	*S4;

// 	first = ft_lstnew()
// 	(*first)->next = S4;
// 	S4 = ft_lstnew(av[1]);
// 	S3 = ft_lstnew(av[2]);
// 	S2 = ft_lstnew(av[3]);
// 	S1 = ft_lstnew(av[4]);
// 	ft_lstadd_front(first, S4);
// 	ft_lstadd_front(first, S3);
// 	ft_lstadd_front(first, S2);
// 	ft_lstadd_front(first, S1);
// 	if (ac == 2)
// 		printf("Nombre de maillons : %d\n", ft_lstsize(S1));
// 	return (0);
// }