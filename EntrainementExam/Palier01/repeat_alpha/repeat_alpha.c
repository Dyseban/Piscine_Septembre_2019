/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:27:23 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/15 15:20:26 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if (str[i] >= 'a' && str[i] <='z')
		{
			j = str[i] - 97;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else
		{
			ft_putchar(str[i]);
		}
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
	ft_repeat_alpha(av[1]);
	return (0);
	
}
