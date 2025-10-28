/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:51:31 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/07 09:42:27 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{	
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 10;
	y = 3;
	
	ft_div_mod(x, y, &div, &mod);
	printf("%d %d %d %d", x, y, div, mod);
	return (0);
}*/
