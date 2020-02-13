/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:48:36 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/12 12:59:10 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			ft_putchar(str[i]);
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			ft_putchar(str[i]);
			i++;
		}
		else
			i++;
	}
	str[i] = '\n';
}

int		main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
		ft_ulstr(av[1]);
	return (0);
}
