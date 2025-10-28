/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:02:38 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/08/20 18:09:47 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char*s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_bubblesort(int argc, char **argv)
{
	char	*temp;
	int		i;

	i = 1;
	while (argc >= 0)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		argc--;
	}
	return (*argv);
}

int	main(int argc, char **argv)
{
	int	vector;
	int	letter;

	vector = 1;
	letter = 0;
	ft_bubblesort(argc, argv);
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
