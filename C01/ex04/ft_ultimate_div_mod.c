/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:29:21 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/06 14:20:39 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 3; 
	printf ("%d %d ", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("%d %d", x, y);
}*/
