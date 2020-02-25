/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:13:53 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/13 11:28:52 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int c;
	int aux;

	c = 0;
	aux = 0;
	if (str[0] == '\0')
		return (1);
	while (str[c])
	{
		if ((str[c] > 64 && str[c] < 91) || (str[c] > 96 && str[c] < 123))
			aux++;
		c++;
	}
	if (c == aux)
		return (1);
	else
		return (0);
}