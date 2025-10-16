/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:06:20 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/06 21:34:10 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc (ft_strlen(src));
	while (str[i] != '0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
