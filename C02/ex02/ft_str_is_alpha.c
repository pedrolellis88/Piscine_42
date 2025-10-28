/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:06:14 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/09 16:22:33 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{	
	char	str1[]= "Adfasf";
	char	str2[]= "sdafsaasdda";
	char	str3[]= "";
	int	n1;
	int	n2;
	int	n3;
		
	
	n1 = ft_str_is_alpha(str1);
	n2 = ft_str_is_alpha(str2);
	n3 = ft_str_is_alpha(str3); 
	printf("%d %d %d", n1, n2, n3);
	return (0);
}*/
