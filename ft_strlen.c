/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:54:16 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/16 10:27:26 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Ma Fonction : %ld\n", ft_strlen(av[1]));
		printf("Man Fonction : %ld\n", strlen(av[1]));
	}
	return (0);
}*/
//Finit.
