/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:13:27 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/19 10:44:08 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = -1;
	if (ft_strlen(s) < start)
	{
		dest = malloc(sizeof(char) * 1);
		dest[0] = '\0';
		return (dest);
	}
	else if (len <= ft_strlen(s) - start)
		dest = malloc(sizeof(char) * len + 1);
	else
		dest = malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	if (!dest)
		return (NULL);
	start--;
	while (++i < len && s[++start])
		dest[i] = s[start];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}
*/