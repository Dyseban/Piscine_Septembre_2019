/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:30:37 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/16 13:47:51 by dyseban          ###   ########.fr       */
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
	if (str[i] == '\0')
		ft_putchar('\n');
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
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_last_word(av[1]);
	ft_putchar('\n');
	return (0);
}
