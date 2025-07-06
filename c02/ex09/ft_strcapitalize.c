/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztoptas <ztoptas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 00:23:58 by ztoptas           #+#    #+#             */
/*   Updated: 2025/04/20 08:05:24 by ztoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_new_case(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_case;

	i = 0;
	new_case = 1;
	while (str[i])
	{
		if (new_case == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			new_case = 0;
		}
		else if (new_case == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (is_new_case(str[i]))
			new_case = 1;
		else
			new_case = 0;
		i++;
	}
	return (str);
}
