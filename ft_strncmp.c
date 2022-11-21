/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:12:44 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/16 12:36:43 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 && (!s1 || !s2))
		return (0);
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("Ma Fonction : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
		printf("Man Fonction : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	}
	return (0);
}*/
//Finit.
