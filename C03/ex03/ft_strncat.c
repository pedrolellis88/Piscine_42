/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:30:25 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/13 19:58:57 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*start;

	start = dest;
	if (nb == 0)
		return (start);
	while (*dest)
	{
		dest++;
	}
	i = 0;
	while (src[i] && i < nb)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (start);
}
/*#include <stdio.h>
#include <string.h>

int main(int c, char **v) 
{
    int n = 2;
    (void)c;	    
    
    printf("%s\n\n", strncat(v[1], v[2], n));
    //printf("%s", ft_strncat(v[1], v[2], n));
}*/
