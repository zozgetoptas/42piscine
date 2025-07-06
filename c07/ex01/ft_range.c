/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:18:36 by ztoptas           #+#    #+#             */
/*   Updated: 2025/04/28 07:06:32 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	p = malloc((max - min) * sizeof(int));
	if (p == NULL)
	{
		return (0);
	}
	i = 0;
	while (min + i < max)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
