/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:40:01 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/19 15:37:14 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	char tab[256];

	i = 0;
	while (s1[i])
	{
		if (tab[(int)s1[i]] == 0)
		{
			tab[(int)s1[i]] = 1;
			ft_putchar(s1[i]);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (tab[(int)s2[i]] == 0)
		{
			tab[(int)s2[i]] = 1;
			ft_putchar(s2[i]);
		}
		i++;
	}

}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putchar('\n');
		return (0);
	}
}
