/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:57:22 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/11 16:29:12 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
	{
		dest++;
	}	
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char string1[] = "ABC";
	char string2[] = "DEF";
//	printf("%s", strcat(string1, string2));
//	printf(" %s", ft_strcat(string1,string2));
}*/			
