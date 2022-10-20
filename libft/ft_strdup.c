/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:07:04 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 18:14:30 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			len;
	const char	*ptr;

	ptr = (const char *) s1;
	len = 0;
	while (ptr[len])
		len++;
	ptr = (const char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	return ((char *)ptr);
}
