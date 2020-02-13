/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:11:59 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/19 11:49:53 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_revprint(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (j <= i)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_revprint(av[1]);
		ft_putchar('\n');
		return (0);
	}
}
