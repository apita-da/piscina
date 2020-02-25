/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:04:37 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/26 18:31:46 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_arguments(int argc, char **argv)
{
	int		cont;
	int		aux;

	(void)argc;
	cont = 1;
	aux = 0;
	while (argv[cont] != '\0')
	{
		while (argv[cont][aux] != '\0')
		{
			write(1, &argv[cont][aux], 1);
			aux++;
		}
		cont++;
		aux = 0;
		write(1, "\n", 1);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		cont;

	cont = 0;
	while (s1[cont] != '\0' || s2[cont] != '\0')
	{
		if (s1[cont] == s2[cont] != '\0')
			cont++;
		else
			return (s1[cont] - s2[cont]);
	}
	return (0);
}

void	ft_order(int n, char **str)
{
	char	*c;
	int		cont;
	int		aux;

	cont = 1;
	aux = 0;
	while (aux < n - 1)
	{
		while (cont < n - 1)
		{
			if ((ft_strcmp(str[1], str[cont + 1]) > 0)
					&& (str[cont + 1] != '\0'))
			{
				c = str[cont];
				str[cont] = str[cont + 1];
				str[cont + 1] = c;
			}
			cont++;
		}
		aux++;
		cont = 1;
	}
	ft_print_arguments(n, str);
}

int		main(int n, char **str)
{
	ft_order(n, str);
}
