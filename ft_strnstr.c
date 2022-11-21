/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:06:09 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/18 09:27:46 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len == 0 && (!big || !little))
		return (NULL);
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0' && i + j < len)
				return ((char *)&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
int		main(void)
{
	printf("Ma Fonction : %s\n", strnstr(((void *)0), "fake", 12));
	printf("Ma Fonction : %s\n", strnstr(((void *)0), "fake", 0));
	return (0);
}*/
//Finit.
