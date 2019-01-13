/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudzik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 15:52:01 by mrudzik           #+#    #+#             */
/*   Updated: 2018/03/21 16:35:53 by mrudzik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int res;

	res = 1;
	while (res * res <= nb)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}