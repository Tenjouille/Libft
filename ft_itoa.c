/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourdea <tbourdea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:43:20 by tbourdea          #+#    #+#             */
/*   Updated: 2022/11/18 15:54:16 by tbourdea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_mallocsize(long n)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n >= 10)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static int	ft_negative(int n)
{
	if (n >= 0)
		return (0);
	return (1);
}

static char	*ft_strrev(char *dest, int len)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < len - i)
	{
		tmp = dest[i];
		dest[i] = dest[len - i];
		dest[len - i] = tmp;
		i++;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*dest;
	int		i;

	nb = n;
	i = 1;
	dest = malloc(sizeof(char) * (ft_mallocsize(nb) + 1));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	if (ft_negative(n))
		nb = -nb;
	while (nb >= 10)
	{
		dest[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	dest[i] = nb + '0';
	if (ft_negative(n))
		dest[i + 1] = '-';
	return (ft_strrev(dest, ft_mallocsize(n)));
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%s\n", ft_itoa(atoi(av[1])));
// 	return (0);
// }
//Finit.

// int	main(void)
// {
// 	char *i1 = ft_itoa(-623);
// 	char *i2 = ft_itoa(156);
// 	char *i3 = ft_itoa(-0);

// 	if (strcmp(i1, "-623"))
// 	{
// 		printf("Fail");
// 		return(0);
// 	}
// 	if (strcmp(i2, "156"))
// 	{
// 		printf("Fail");
// 		return(0);
// 	}
// 	if (strcmp("0", i3))
// 	{
// 		printf("Fail");
// 		return(0);
// 	}
// 	printf("SUCCESS");
// 	return(0);
// }