/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:57:51 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/14 10:26:41 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int cont;
	int aux;

	cont = 0;
	aux = 0;
	if (str[0] == '\0')
		return (1);
	while (str[cont] != '\0')
	{
		if (str[cont] > 96 && str[cont] < 123)
			aux++;
		cont++;
	}
	if (cont == aux)
		return (1);
	else
		return (0);
}
