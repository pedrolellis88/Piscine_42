/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:13:56 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/11 10:49:22 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	flag;
	int		i;

	flag = 1;
	str = strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
			flag = 1;
		i++;
	}
	return (str);
}	
/*#include <stdio.h>
int	main(int c, char **v)
{
	if (c == 2)
	{
		printf("%s", ft_strcapitalize(v[1]));
	}
	else
	{
		printf("%s", "Put a string");
	}
}*/
