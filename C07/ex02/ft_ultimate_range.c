/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 10:04:34 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/18 17:32:02 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	array_len(int min, int max)
{
	if (min >= max)
		return (0);
	return (max - min);
}	

int	ft_ultimate_range(int **range, int min, int max)
{	
	int	i;
	int	*array;
	int	len;

	len = array_len(min, max);
	if (len <= 0)
	{	
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{	
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (len);
}
/*#include <stdio.h>

int 	main(int c, char **v)
{
	(void)c;
	int	*SizeArray; 
	char 	Minv = atoi(v[1]);
	char	Maxv = atoi(v[2]);
	int	len = ft_ultimate_range (&SizeArray, Minv, Maxv);
	int	i = 0;
	if (len == 0)
		printf("%s\n", "Min cant be more than Max");
	else
	{
		while (i < len)
		{
			printf ("%d ", SizeArray[i]);
			i ++;
		}
	}
}*/
