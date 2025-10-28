/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:12:25 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/09 17:42:31 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= 0 && *str <= 31)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{

	char string[] = "Banana";
	char string2[] = "oi \n tudo bem";
	printf("%d", ft_str_is_printable(string2));
}*/		
