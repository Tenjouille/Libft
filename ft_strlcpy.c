/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:37:33 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/15 09:29:52 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < (size - 1) && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("Ma fonction : %ld \n", ft_strlcpy(av[1], av[2], atoi(av[3])));
		printf("%s\n", av[1]);
		printf("Man fonction : %ld\n", strlcpy(av[1], av[2], atoi(av[3])));
		printf("%s\n", av[1]);
	}
	return (0);
}*/
//Resultats incoherents.
