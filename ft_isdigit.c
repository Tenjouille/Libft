/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:28:48 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/10 14:43:10 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	printf("Ma Fonction : %d\n", ft_isdigit(atoi(av[1])));
	printf("Man Fonction : %d\n", isdigit(atoi(av[1])));
	return (0);
}*/
//Finit.
