/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:56:51 by ztoptas           #+#    #+#             */
/*   Updated: 2025/04/26 15:13:22 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 0)
	{
		i = 0;
		while (argv[0][i])
			i++;
		write(1, argv[0], i);
		write(1, "\n", 1);
	}
	return (0);
}
