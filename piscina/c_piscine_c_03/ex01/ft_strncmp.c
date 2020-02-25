/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:35:02 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/18 10:31:29 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int cont;

	if (n == 0)
		return (0);
	cont = 0;
	while ((s1[cont] == s2[cont]) && (s1[cont] != '\0' && s2[cont] != '\0')
			&& (cont < n - 1))
	{
		cont++;
	}
	return (s1[cont] - s2[cont]);
}
