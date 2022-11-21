/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:45:09 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/10 15:28:12 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Ma Fonction : %d\n", ft_isprint(atoi(av[1])));
		printf("Man Fonction : %d\n", isprint(atoi(av[1])));
	}
	return (0);
}*/
//Finit.
