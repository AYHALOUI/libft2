/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:06:07 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 19:08:09 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*str = NULL;
	int		len;
    int		i;
    int		j;
	if (!s1 || !s2)
		return (str);
	else
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str != NULL)
		{
			i = 0;
			while (s1[i])
			{
				str[i] = s1[i];
				i++;
			}
			j = 0;
			
			while (s2[j])
			{
				str[i++] = s2[j];
				j++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}
