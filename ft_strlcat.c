/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:58:42 by rmouatac          #+#    #+#             */
/*   Updated: 2023/11/01 12:09:31 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[i];
		c++;
		i++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
	//&src[i] represents the remaining characters that were not copied to the dest which is 4 in our test ("orld")
}
