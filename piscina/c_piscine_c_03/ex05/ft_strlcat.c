/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:51:16 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/19 11:54:22 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int cont1;
	unsigned int cont2;
	unsigned int cont3;

	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	while (dest[cont2])
		cont2++;
	while (src[cont3])
		cont3++;
	if (size <= cont2)
		return (cont3 + size);
	while ((dest[cont1] != '\0') && a < (size - 1))
		cont1++;
	while (*src && a < (size - 1))
	{
		dest[cont1] = *src;
		cont1++;
		src++;
	}
	dest[cont1] = '\0';
	return (cont2 + cont3);
}
