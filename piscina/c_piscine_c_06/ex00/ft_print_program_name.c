/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 10:10:44 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/26 20:22:19 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int cont;

	(void)argc;
	cont = 0;
	while (argv[0][cont] != '\0')
	{
		write(1, &argv[0][cont], 1);
		cont++;
	}
	write(1, "\n", 1);
	return (0);
}
