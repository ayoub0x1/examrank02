/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:06:04 by aymoulou          #+#    #+#             */
/*   Updated: 2021/12/14 15:13:18 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1 ,"\n", 1);
		return (0);
	}
	char	used[256] = {0};

	char	*s1 = av[1];
   	char 	*s2 = av[2];
	while (*s1)
	{
		if (used[(int)*s1] == 0)
		{
			ft_putchar(*s1);
			used[(int)*s1]++;
		}
		s1++;
	}
	while (*s2)
	{
		if (used[(int)*s2] == 0)
		{
			ft_putchar(*s2);
			used[(int)*s2]++;
		}
		s2++;
	}
	ft_putchar('\n');
}
