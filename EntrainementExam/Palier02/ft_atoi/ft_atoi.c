/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyseban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:29:32 by dyseban           #+#    #+#             */
/*   Updated: 2019/09/12 14:39:26 by dyseban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' ||
			str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= 0 && str[i] <= 9)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * neg);
}
