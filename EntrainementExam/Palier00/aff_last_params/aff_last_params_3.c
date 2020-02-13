/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_params_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 09:53:09 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/19 10:40:41 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		putchar('\n');
		return (0);
	}
	else
	{
		putstr(av[ac - 1]);
		putchar('\n');
		return (0);
	}
	putchar('\n');
}
