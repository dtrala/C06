/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_profram_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 21:00:22 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/24 21:13:37 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
