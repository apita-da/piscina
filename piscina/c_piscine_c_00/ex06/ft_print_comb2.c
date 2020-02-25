/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:19:13 by apita-da          #+#    #+#             */
/*   Updated: 2019/09/09 18:01:20 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	see(int n);
void	space(int m);

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	esp;

	esp = ' ';
	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1;
		while (n2 <= 99)
		{
			if (n1 != n2)
			{
				see(n1);
				write(1, &esp, 1);
				see(n2);
				space(n1);
			}
			n2++;
		}
		n1++;
	}
}

void	space(int m)
{
	char	coma;
	char	esp;

	coma = ',';
	esp = ' ';
	if (m != 98)
	{
		write(1, &coma, 1);
		write(1, &esp, 1);
	}
}

void	see(int n)
{
	char c1;
	char c2;

	if (n < 10)
	{
		c1 = '0';
		c2 = n + '0';
	}
	else
	{
		c1 = ((n / 10) + '0');
		c2 = ((n % 10) + '0');
	}
	write(1, &c1, 1);
	write(2, &c2, 1);
}
