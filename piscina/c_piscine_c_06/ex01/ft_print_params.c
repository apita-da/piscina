/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 10:20:33 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/26 13:21:30 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int cont;
	int aux;

	(void)argc;
	aux = 1;
	while (argv[aux] != '\0')
	{
		cont = 0;
		while (argv[aux][cont] != '\0')
		{
			write(1, &argv[aux][cont], 1);
			cont++;
		}
		aux++;
		write(1, "\n", 1);
	}
	return (0);
}
