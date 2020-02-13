/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:40:44 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/12 12:46:02 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_print(char *str)
{
	int i;

	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		ft_putchar(str[i]);
		i--;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
		ft_rev_print(av[1]);
	return (0);
}
