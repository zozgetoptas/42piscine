/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:49:38 by ztoptas           #+#    #+#             */
/*   Updated: 2025/04/29 09:59:02 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;
	int	sep_len;

	total = 0;
	i = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
			total += sep_len;
		i++;
	}
	return (total);
}

void	ft_copy(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = ft_total_len(size, strs, sep);
	result = (char *)malloc(total_len + 1);
	if (!result)
		return (NULL);
	ft_copy(result, size, strs, sep);
	return (result);
}
