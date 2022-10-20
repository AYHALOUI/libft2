/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:29:05 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 17:31:31 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	size_t		i;

	src = (const char *)s;
	i = 0;
	while (src[i] && i < n)
	{
		if (src[i] == (unsigned char)c)
		{
			return ((char *)(src + i));
		}
		i++;
	}
	return (NULL);
}
