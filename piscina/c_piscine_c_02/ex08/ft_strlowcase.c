/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:34:31 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/13 12:46:22 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] > 64 && str[cont] < 91)
			str[cont] += 32;
		cont++;
	}
	return (str);
}