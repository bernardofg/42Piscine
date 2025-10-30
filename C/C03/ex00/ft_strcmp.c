/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:37:04 by bfantine          #+#    #+#             */
/*   Updated: 2025/07/28 13:15:39 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	The strcmp() compares two strings char wise.
	~ If the strings are equal, the function returns 0.
	~ > 0 if the first non-matching character in str1 is greater str2
	~ < 0 if the first non-matching character in lower str2

	We have 3 cases
	1) "hello", "hello" -> strings are equal.
	2) "hel  ", "hello" -> strings are different s1 < s2
	3) "hello", "hel  " -> strings are differente s1 > s2
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_strcmp("a", "a"));  
    printf("%d\n", ft_strcmp("ABC", "AB")); 
    printf("%d\n", ft_strcmp("a", "b")); 
    printf("%d\n", ft_strcmp("", ""));
    return 0;
}
*/
