/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferegot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:01:21 by rferegot          #+#    #+#             */
/*   Updated: 2019/09/14 15:44:09 by rferegot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (nb == 0)
		return (0);
	while (nb == 1)
		return (1);
	while (i <= nb / i)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	racine;
	int	x;

	x = 3;
	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	racine = ft_sqrt(nb);
	while (x <= racine)
	{
		if (nb % x == 0)
			return (0);
		x += 2;
	}
	return (1);
}
