/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:44:40 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/11 17:53:34 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int cont;
	int aux;
	int inv[size];

	aux = size - 1;
	cont = 0;
	while (cont < size)
	{
		inv[cont] = tab[aux];
		aux--;
		cont++;
	}
	cont = 0;
	while (cont < size)
	{
		tab[cont] = inv[cont];
		cont++;
	}
}
