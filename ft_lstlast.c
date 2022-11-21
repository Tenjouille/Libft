/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:47:00 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/20 16:39:32 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// int	main(int ac, char **av)
// {
// 	t_list	*Salut;
// 	t_list	*Hello;
// 	t_list	*Hola;
// 	t_list	*Buongiorno;

// 	(void)ac;
// 	Salut = ft_lstnew(av[1]);
// 	Hello = ft_lstnew(av[2]);
// 	Hola = ft_lstnew(av[3]);
// 	Buongiorno = ft_lstnew(av[4]);
// 	Salut->next = Hello;
// 	Hello->next = Hola;
// 	Hola->next = Buongiorno;
// 	Buongiorno->next = NULL;
// 	return (0);
// }