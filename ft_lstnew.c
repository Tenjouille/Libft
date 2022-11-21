/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:40:19 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/19 16:52:56 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = (char *)content;
	new->next = NULL;
	return (new);
}

// int	main(int ac, char **av)
// {
// 	t_list	*Salut;

// 	Salut = ft_lstnew(av[1]);
// 	if (ac == 2)
// 		printf("Le contenue de la liste 1 : %s\n", (char *)Salut->content);
// 	return (0);
// }