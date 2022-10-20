/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:40:33 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 17:06:27 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//ko
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst)
	{
		//lst = lst ->next;
		//ft_lstdelone(lst, del);
	}
}
