/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:39:01 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/16 14:49:34 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("\n");
		return (0);
	}
	if (av[2][0] == '+')
	{
		printf("%d\n", atoi(av[1]) + atoi(av[3]));
		return (0);
	}
	else if (av[2][0] == '-')
	{
		printf("%d\n", atoi(av[1]) - atoi(av[3]));
		return (0);
	}
	else if (av[2][0] == '*')
	{
		printf("%d\n", atoi(av[1]) * atoi(av[3]));
		return (0);
	}
	else if (av[2][0] == '/')
	{
		printf("%d\n", atoi(av[1]) / atoi(av[3]));
		return (0);
	}
	else if (av[2][0] == '%')
	{
		printf("%d\n", atoi(av[1]) % atoi(av[3]));
		return (0);
	}
}
