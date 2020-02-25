/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:36:15 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/18 10:36:08 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	cont;
	int aux;

	cont = 0;
	aux = 0;
	while (dest[cont] != '\0')
	{
		cont++;
	}
	while (src[aux] != '\0')
	{
		dest[cont + aux] = src[aux];
		aux++;
	}
	dest[cont + aux] = '\0';
	return (dest);
}
