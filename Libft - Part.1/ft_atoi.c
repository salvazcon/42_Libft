/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saazcon- <saazcon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:46:51 by saazcon-          #+#    #+#             */
/*   Updated: 2022/10/02 00:14:37 by saazcon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long int	ft_check_long(unsigned long long int res, int sign)
{
	if (res > 9223372036854775806 && sign > 0)
		return (-1);
	if (res > (9223372036854775806 + 1) && sign < 0)
		return (0);
	return (res);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						sign;
	unsigned long long int	val;

	i = 0;
	sign = 1;
	val = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = (sign * -1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10);
		val = (val + (str[i] - 48));
		i++;
	}
	val = ft_check_long(val, sign);
	return (val * sign);
}
