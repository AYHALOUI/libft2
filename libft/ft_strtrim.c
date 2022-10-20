/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:55:44 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 17:58:19 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//final version
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trim;

	trim = malloc ((ft_strlen(s1) * 1));
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	trim = ft_substr(s1, 0, len + 1);
	return (trim);
}
