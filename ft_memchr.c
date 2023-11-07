/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:14:33 by tcharuel          #+#    #+#             */
/*   Updated: 2023/11/07 12:41:21 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	byte;
	unsigned char	*buffer;
	size_t			i;

	byte = (unsigned char)c;
	buffer = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buffer[i] == byte)
			return ((void *)(&buffer[i]));
		i++;
	}
	return (NULL);
}
