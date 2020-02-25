/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:11:05 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/18 13:25:03 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				cont;
	unsigned int	aux;

	cont = 0;
	aux = 0;
	while (dest[cont] != '\0')
		cont++;
	while ((src[aux] != '\0') && (aux < nb))
	{
		dest[cont + aux] = src[aux];
		aux++;
	}
	dest[cont + aux] = '\0';
	return (dest);
}
