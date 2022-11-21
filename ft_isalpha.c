/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:28 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/10 14:35:24 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'z')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	return (1);
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	printf("Ma fonction : %d\n", ft_isalpha(atoi(av[1])));
	printf("Man fonction : %d\n", isalpha(atoi(av[1])));
	return (0);
}*/
// fini.
