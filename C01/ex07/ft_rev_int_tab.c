/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:20:09 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/06 18:30:15 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{	
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
/*#include <stdio.h>

int	main(void)
{	
	int	size = 4;
	int	count[size];
	int	i = 0;

	count[0] = 0;
	count[1] = 1;
	count[2] = 2;
	count[3] = 3;
	ft_rev_int_tab(count, size);
	while (i < size)
	{	
		printf("%d", count[i]);
		i++;
	}
}*/
