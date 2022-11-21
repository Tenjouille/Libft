/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:21:22 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/10 16:53:26 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	printf("Ma fonction : %c\n", ft_tolower(atoi(av[1])));
	printf("Ma fonction : %c\n", tolower(atoi(av[1])));
	return (0);
}*/
//Finit.
