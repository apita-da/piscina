/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:16:26 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/13 12:43:15 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int cont;

	cont = 0;
	if (str[0] == '\0')
		return (1);
	while (str[cont])
	{
		if (str[cont] > 47 && str[cont] < 58)
			cont++;
		else
			return (0);
	}
	return (1);
}
