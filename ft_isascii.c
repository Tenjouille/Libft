/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:41:54 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/16 10:46:03 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("Ma Fonction : %d\n", ft_isascii(atoi(av[1])));
	printf("Man Fonction : %d\n", isascii(atoi(av[1])));
	return (0);
}
*/
//Finit.
