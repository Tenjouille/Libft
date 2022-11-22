/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:53:43 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/22 17:08:51 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;

	if (!s && c != 0)
		return (NULL);
	size = ft_strlen(s);
	while (size >= 0 && (unsigned char)s[size] != (unsigned char)c)
		size--;
	if (size < 0)
		return (NULL);
	return ((char *)&s[size]);
}

// int	main(void)
// {
// 	char	*empty = (char *)calloc(1, 1);
// 	printf("Man fonction : %s\n", strrchr(empty, 'V'));
// 	printf("Ma fonction : %s\n", ft_strrchr(empty, 'V'));
// 	free(empty);
// 	return (0);
// }
// Finit.
