/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:41:13 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/26 14:18:25 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	cont;
	int	aux;

	cont = argc - 1;
	while (cont != 0)
	{
		aux = 0;
		while (argv[cont][aux] != '\0')
		{
			write(1, &argv[cont][aux], 1);
			aux++;
		}
		cont--;
		write(1, "\n", 1);
	}
	return (0);
}
