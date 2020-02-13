/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:35:35 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/15 16:08:00 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (s1[i] == s2[j])
				i++;
		j++;
	}
	if (s1[i] == '\0')
	{
		i = 0;
		while (s1[i])
		{
			ft_putchar(s1[i]);
			i++;
		}
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_wdmatch(av[1], av[2]);
	return (0);
}
