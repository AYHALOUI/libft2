/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:33:13 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 16:34:41 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = NULL;
	element = (t_list *)malloc(sizeof(t_list));
	if (element != NULL)
	{
		element->content = content;
		element->next = NULL;
	}
	return (element);
}
