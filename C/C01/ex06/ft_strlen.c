/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:52:06 by bfantine          #+#    #+#             */
/*   Updated: 2025/07/23 23:31:01 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
    char *str = "Hello, world!";

    int length = ft_strlen(str);

    printf("O comprimento da string \"%s\" é: %d\n", str, length);

    return (0);
}
*/
