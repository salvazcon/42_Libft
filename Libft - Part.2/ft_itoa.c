/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saazcon- <saazcon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:50:41 by saazcon-          #+#    #+#             */
/*   Updated: 2022/10/02 00:15:12 by saazcon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size_malloc(int n)
{
	long int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	size;
	long int	ncpy;
	char		*dst;

	size = ft_size_malloc(n);
	ncpy = n;
	dst = ft_calloc(sizeof(char), size + 1);
	if (!dst)
		return (0);
	if (ncpy < 0)
	{
		ncpy = (ncpy * (-1));
		dst[0] = '-';
	}
	dst[size] = '\0';
	while (size > 0)
	{
		if (dst[0] == '-' && size == 1)
			return (dst);
		dst[size - 1] = ((ncpy % 10) + 48);
		ncpy = (ncpy / 10);
		size--;
	}
	return (dst);
}
