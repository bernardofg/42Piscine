/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:19:18 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/04 15:15:30 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
	write(1, "\n", 1);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_sort(int argc, char **argv)
{
	int	j;
	int	k;
	int	size;

	size = argc;
	while (size > 1)
	{
		j = 0;
		k = 1;
		while (k < size)
		{
			if (ft_strcmp(argv[j], argv[k]) > 0)
				ft_swap(&argv[j], &argv[k]);
			++j;
			++k;
		}
		--size;
	}
}

int	main(int argc, char **argv)
{
	ft_sort(argc - 1, argv + 1);
	while (*(++argv))
		ft_putstr(*argv);
}
