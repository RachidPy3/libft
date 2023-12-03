/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:21:54 by rmouatac          #+#    #+#             */
/*   Updated: 2023/11/01 16:22:24 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char) s[i] == (unsigned char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((unsigned char) c == 0)
		return ((char *) &s[i]);
	return (0);
}
