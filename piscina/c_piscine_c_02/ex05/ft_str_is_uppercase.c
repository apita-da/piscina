/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:27:15 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/12 16:53:57 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int cont;
	int aux;

	cont = 0;
	aux = 0;
	if (str[1] == '\0')
		return (1);
	while (str[cont])
	{
		if (str[cont] > 64 && str[cont] < 91)
			aux++;
		cont++;
	}
	if (cont == aux)
		return (1);
	else
		return (0);
}
