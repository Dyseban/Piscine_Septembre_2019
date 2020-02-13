/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:07:19 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/18 17:30:46 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	//ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else if (av[1][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		first_word(av[1]);
		ft_putchar('\n');
	}
	return (0);
}

/*int		main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	ft_putchar('\n');
	return (0);
}*/
