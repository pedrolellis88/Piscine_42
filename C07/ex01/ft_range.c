/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 09:09:58 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/18 17:18:53 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	array_len(int min, int max)
{
	if (min >= max)
		return (0);
	return (max - min);
}	

int	*ft_range(int min, int max)
{	
	int	i;
	int	*array;
	int	len;

	len = array_len(min, max);
	if (len <= 0)
		return (NULL);
	array = malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{	
		array[i] = min + i;
		i ++;
	}
	return (array);
}
/*#include <stdio.h>

int 	main(int c, char **v)
{
	(void)c;
	char 	Minv = atoi(v[1]);
	char	Maxv = atoi(v[2]);
	int	*s = ft_range (Minv, Maxv);
	int	i = 0;
	if (ft_range (Minv, Maxv) == NULL)
		printf("%s\n", "Min cant be bigger or equal to Max");
	else
	{
			while (s[i] != '\0')
		{
			printf ("%d ", s[i]);
			i ++;
		}
	}
}*/
