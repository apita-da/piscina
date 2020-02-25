/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:54:59 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/25 16:06:19 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 1)
	{
		if (power == 0)
			return (1);
		return (0);
	}
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
