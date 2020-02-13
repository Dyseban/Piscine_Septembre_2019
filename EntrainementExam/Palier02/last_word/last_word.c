/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:20:01 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/16 14:03:47 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
		i--;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i--;
	i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (av[1][0] == '\0')
	{
		ft_putchar('\n');
		return(0);
	}
	if (ac == 2)
		ft_last_word(av[1]);
	ft_putchar('\n');
	return (0);
}
