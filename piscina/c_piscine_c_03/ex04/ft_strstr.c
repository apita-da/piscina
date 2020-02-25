/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:55:46 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/19 10:49:33 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int cont;
	int aux;

	cont = 0;
	if (to_find[cont] == '\0')
		return (str);
	if (str[cont] == '\0')
		return (0);
	if ((str[cont] == '\0') && (to_find == '\0'))
		return (str);
	while (str[cont] != '\0')
	{
		aux = 0;
		while (str[cont + aux] == to_find[aux])
		{
			if (to_find[aux + 1] != '\0')
				return (&str[cont]);
			aux++;
		}
		cont++;
	}
	return (0);
}
