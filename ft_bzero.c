/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:24:56 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/14 10:51:10 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		bzero(av[1], atoi(av[2]));
		printf("Regarde a quoi je suis reduit : ");
		while (i < atoi(av[2]))
		{
			printf("%c", av[1][i]);
			i++;
		}
		while (av[1][i])
		{
			printf("%c", av[1][i]);
			i++;
		}
		printf("\n%s", av[1]);
	}
	return (0);
}*/
//Semble bon.
