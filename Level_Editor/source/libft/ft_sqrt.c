/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vomelchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 13:40:53 by vomelchu          #+#    #+#             */
/*   Updated: 2018/04/21 14:41:07 by vomelchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int q;
	int sqrt;

	q = 0;
	sqrt = 0;
	while (q < nb / 2)
	{
		sqrt = q * q;
		if (sqrt == nb)
			return (q);
		q++;
	}
	return (-1);
}
