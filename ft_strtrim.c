/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:49:12 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/19 10:50:44 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != c && set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	if (set[i] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		i;
	int		len;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (ft_isset(s1[i], set) && i <= len)
		i++;
	while (ft_isset(s1[len], set) && len >= i)
		len--;
	dest = malloc(sizeof(char) * (len - i + 1) + 1);
	if (!dest)
		return (NULL);
	while (i <= len)
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("", ""));
// 	return (0);
// }
