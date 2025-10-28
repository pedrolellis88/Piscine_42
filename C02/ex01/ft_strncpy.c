/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:54:56 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/12 09:44:09 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{	
	char	str[]="Lellis";
	char	phr[]="purple";
	unsigned int	n = 4;
	printf("%s ", str);
	ft_strncpy(str, phr, n);
	printf("%s ", str);
	return (0);
}*/
