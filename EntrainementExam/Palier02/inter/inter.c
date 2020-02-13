/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:45:25 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/19 16:14:13 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_char(char c, char *str)
{
	int i;

	i = 0;
	if (c == str[i])
		return (1);
	i++;
	return (0);
}

void	ft_inter(char *s1, char *s2)
{
	int	i;
	char tab[256];

	i = 0;
	while (s1[i])
	{
		if (tab[(int)s1[i]] == 0 && check_char(s1[i], s2))
		{
			tab[(int)s1[i]] = 1;
			ft_putchar(s1[i]);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_inter(av[1], av[2]);
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putchar('\n');
		return (0);
	}
}
