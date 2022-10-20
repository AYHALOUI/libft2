/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:40:54 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 17:42:38 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	position;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			position = i;
		}
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (i == position)
			return ((char *)(s + position));
		i++;
	}
	return (NULL);
}
