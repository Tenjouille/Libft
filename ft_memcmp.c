/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:03:54 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/14 14:33:09 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
int	main(int ac, char **av)
{
	char	*God = "Le Bpere";
	char	*Satan = "Le pere";

	if (ac == 2)
	{
		printf("Jesus : %d\n", memcmp(God, Satan, atoi(av[1])));
		printf("Judas : %d\n", ft_memcmp(God, Satan, atoi(av[1])));
	}
	return (0);
}*/
//Finit.
