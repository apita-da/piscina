/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:44:18 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/16 17:50:17 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int	cont;
	int	aux;

	cont = 0;
	aux = 0;
	if (str[0] == '\0')
		return (1);
	while (str[cont] != '\0')
	{
		if (str[cont] > 31 && str[cont] < 127)
			aux++;
		cont++;
	}
	if (aux == cont)
		return (1);
	else
		return (0);
}
