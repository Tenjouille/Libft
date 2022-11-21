/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:31:58 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/10 14:45:10 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < '0' || c > 'z')
		return (0);
	if (c > '9' && c < 'A')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	return (1);
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	printf("Ma Fonction : %d\n", ft_isalnum(atoi(av[1])));
	printf("Man Fonction : %d\n", isalnum(atoi(av[1])));
}*/
//Finit.
