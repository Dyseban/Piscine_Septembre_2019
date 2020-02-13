/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:01:21 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/12 13:16:27 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
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
			i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
		ft_rot_13(av[1]);
	return (0);
}
