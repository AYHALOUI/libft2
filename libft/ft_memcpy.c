/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:01:37 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 16:13:35 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	const char *source;
	char *destination;

	i = 0;
	source = (const char *)src;
	destination = (char *)dst;
	if (!source || !destination)
		return (NULL);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (dst);
}
