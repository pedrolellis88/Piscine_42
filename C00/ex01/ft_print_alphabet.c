/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 08:58:57 by pdiniz-l          #+#    #+#             */
/*   Updated: 2025/07/31 09:00:03 by pdiniz-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{	
	write(1, &"abcdefghijklmnopqrstuvwxyz", 26);
}

/*int	main()
{	ft_print_alphabet();

	return 0;
}*/	
