/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:25:05 by tcharuel          #+#    #+#             */
/*   Updated: 2023/11/06 19:10:56 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buffer;

	if (dest == src || n == 0)
		return (dest);
	buffer = (unsigned char *)malloc(n);
	if (!buffer)
		return (NULL);
	ft_memcpy(buffer, src, n);
	ft_memcpy(dest, buffer, n);
	free(buffer);
	return (dest);
}
