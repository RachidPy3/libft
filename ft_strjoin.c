/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:47:39 by rmouatac          #+#    #+#             */
/*   Updated: 2023/11/09 14:29:09 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sj;
	int		i;
	int		j;

	sj = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	if (!sj)
		return (NULL);
	while (s1[i])
	{
		sj[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		sj[i + j] = s2[j];
		j++;
	}
	sj[i + j] = '\0';
	return (sj);
}
