/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 11:08:22 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/19 15:04:10 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
	{
		dest++;
	}	
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_validate(int size)
{
	char	*str;

	if (size == 0)
	{	
		str = "";
		return (str);
	}
	else
		return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*catstr;
	int		tempsize;

	ft_validate(size);
	tempsize = size;
	len = 0;
	while (tempsize > 0)
	{
		len += ft_strlen(strs[tempsize - 1]);
		tempsize--;
	}
	catstr = malloc(sizeof(char *) * ft_strlen(sep) + 1 * (size - 1) * len + 1);
	catstr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(catstr, strs[i]);
		if (i < size - 1)
			ft_strcat(catstr, sep);
		i++;
	}
	return (catstr);
}
/*#include <stdio.h>
int	main(int c, char **v)
{
	if (c > 1)
		printf("%s\n", ft_strjoin(atoi(v[1]), &v[2], " , "));
	else
		printf("Error");
}*/
