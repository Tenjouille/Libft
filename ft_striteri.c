/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:41:30 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/19 10:52:43 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	void			(*pointf)(unsigned int, char*);

	if (s)
	{
		i = 0;
		pointf = f;
		while (s[i])
		{
			(*pointf)(i, &s[i]);
			i++;
		}
	}
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		ft_striteri(av[1], f);
	return (0);
}
*/
//A tester...
