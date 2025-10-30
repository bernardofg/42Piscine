/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:29:25 by bfantine          #+#    #+#             */
/*   Updated: 2025/07/31 15:57:11 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_check(char *str)
{
	int	i;
	int	negative;

	negative = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	if (negative % 2 == 0)
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (ft_check(str) == 0)
		return (result);
	else
		return (-result);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "---++--3210da321s";
	printf ("%d", ft_atoi(str));
}
*/
