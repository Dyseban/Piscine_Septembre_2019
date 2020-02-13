/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:54:23 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/19 11:09:56 by dyseban          ###   ########.fr       */
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
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
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
	else 
	{
		ft_repeat_alpha(av[1]);
		ft_putchar('\n');
		return (0);
	}
}
