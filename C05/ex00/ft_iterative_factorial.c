/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:06:29 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/16 13:44:23 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	i;

	f = 1;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			f *= i;
			i++;
		}
	}
	return (f);
}
/*#include <stdio.h>
int	main(void)
{	
	int	x = 5;
	printf("%d", ft_iterative_factorial(x));
}*/
