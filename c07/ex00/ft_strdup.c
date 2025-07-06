/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:12:00 by ztoptas           #+#    #+#             */
/*   Updated: 2025/04/28 07:13:01 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		counter;
	char	*ret_val;

	counter = 0;
	while (src[counter])
	{
		counter++;
	}
	ret_val = malloc(sizeof(char) * (counter + 1));
	if (ret_val == NULL)
	{
		return (0);
	}
	counter = 0;
	while (src[counter])
	{
		ret_val[counter] = src[counter];
		counter++;
	}
	ret_val[counter] = '\0';
	return (ret_val);
}
