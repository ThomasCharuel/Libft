/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:25:05 by tcharuel          #+#    #+#             */
/*   Updated: 2023/11/07 15:56:45 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buffer_src;
	unsigned char	*buffer_dest;
	int				i;

	if (dest == src || n == 0)
		return (dest);
	buffer_src = (unsigned char *)src;
	buffer_dest = (unsigned char *)dest;
	i = n;
	while (--i >= 0)
		buffer_dest[i] = buffer_src[i];
	return (dest);
}
