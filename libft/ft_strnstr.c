/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:52:11 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 17:54:35 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//final version
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)haystack;
	while (str[i])
	{
		if (str[i] == needle[j])
		{
			while ((str[i + j] == needle[j]) && (i + j < len))
			{
				if (needle[j + 1] == '\0')
					return (str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
