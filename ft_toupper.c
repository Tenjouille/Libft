/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:06:50 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/10 16:49:29 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	printf("Ma fonction : %c\n", ft_toupper(atoi(av[1])));
	printf("Ma fonction : %c\n", toupper(atoi(av[1])));
	return (0);
}*/
//Finit.
