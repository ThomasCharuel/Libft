/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:44:33 by tcharuel          #+#    #+#             */
/*   Updated: 2023/11/07 18:39:00 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_length;

	little_length = ft_strlen(little);
	if (little_length == 0)
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (!ft_strncmp(&big[i], little, little_length - 1))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
