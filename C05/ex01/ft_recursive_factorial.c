/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:46:18 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/16 13:53:22 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb *(ft_recursive_factorial(nb - 1)));
}
/*#include <stdio.h>
int	main(void)
{
	int	x = 5;
	printf("%d", ft_recursive_factorial(x));
}*/
