/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:32:30 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/12 09:46:34 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(int c, char **v)
{
	(void)c;	
	printf("A primeira string agora : %s\n" , v[1]);
	ft_strcpy(v[1], v[2]);
	printf("A primeira string pós-função : %s\n", v[1]);
	//printf("e ficou %s",strcpy(v[1], v[2]));
}*/
