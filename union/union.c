/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:06:04 by aymoulou          #+#    #+#             */
/*   Updated: 2021/11/27 18:21:03 by aymoulou         ###   ########.fr       */
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
		ft_putchar('\n');
		return (0);
	}
	char	used[256] = {0};

	char	*s1 = av[1];
   	char 	*s2 = av[2];
	while (*s1)
	{
		if (used[*s1] == 0)
		{
			ft_putchar(*s1);
			used[*s1]++;
		}
		s1++;
	}
	while (*s2)
	{
		if (used[*s2] == 0)
		{
			ft_putchar(*s2);
			used[*s2]++;
		}
		s2++;
	}
	ft_putchar('\n');
}
