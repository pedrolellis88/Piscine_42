/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:07:37 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/16 20:20:29 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	vector;
	int	letter;

	vector = 1;
	letter = 0;
	if (argc >= 2)
	{
		while (vector < argc)
		{
			while (argv[vector][letter] != '\0')
			{
				ft_putchar(argv[vector][letter]);
				letter++;
			}
			letter = 0;
			ft_putchar('\n');
			vector++;
		}
	}
}
