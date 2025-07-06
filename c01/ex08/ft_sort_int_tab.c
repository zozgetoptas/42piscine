/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:09:27 by ztoptas           #+#    #+#             */
/*   Updated: 2025/04/16 15:39:43 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size -1 - i)
		{
			if (tab [j] > tab [j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab [j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
