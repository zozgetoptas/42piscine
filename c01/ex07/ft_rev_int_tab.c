/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:51:20 by ztoptas           #+#    #+#             */
/*   Updated: 2025/04/16 15:32:37 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab [size - i -1];
		tab [size - i -1] = temp;
		i ++;
	}
}
