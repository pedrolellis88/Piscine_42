/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:15:58 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/07 09:50:10 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{	
	int	i;
	int	temp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{	
			if (tab[i] > tab[i + 1])
			{
				temp = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = temp;
			}
			i++;
		}	
		size--;
	}
}

/*#include <stdio.h>

int	main(void)
{	
	int	size;
	int	i;
	int array[4];

	array[0] = 4;
	array[1] = 2;
	array[2] = 1;
	array[3] = 3;

	i = 0;
	size = 4;

	ft_sort_int_tab(array, size);
	while( i < size )
	{
		printf("%d", array[i]);
		i++;
	}
}*/
