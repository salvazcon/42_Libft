/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saazcon- <saazcon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:22:46 by saazcon-          #+#    #+#             */
/*   Updated: 2022/10/02 00:22:30 by saazcon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src >= dest)
		return (ft_memcpy(dest, src, len));
	while (len--)
	{
		((char *)dest)[i + len] = ((unsigned char *)src)[i + len];
	}
	return (dest);
}
