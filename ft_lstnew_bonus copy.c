/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:23:25 by rmouatac          #+#    #+#             */
/*   Updated: 2023/11/24 13:23:26 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ctn;

	ctn = malloc(sizeof(t_list));
	if (!ctn)
		return (NULL);
	ctn->content = content;
	ctn->next = NULL;
	return (ctn);
}
