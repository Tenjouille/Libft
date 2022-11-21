/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:59:29 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/15 09:30:57 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	printf("Man Fonction : %p\n", memset(av[1], atoi(av[2]), atoi(av[3])));
	printf("Ma Fonction : %p\n", ft_memset(av[1], atoi(av[2]), atoi (av[3])));
	return (0);
}*/
//Resolu, a retest.
