/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:53:19 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/16 15:07:36 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rod_13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
			ft_putchar(str[i]);
			i++;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
			ft_putchar(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_rod_13(av[1]);
	return (0);
}
