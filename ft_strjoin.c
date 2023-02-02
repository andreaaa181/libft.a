/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiguran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:01:32 by asiguran          #+#    #+#             */
/*   Updated: 2023/02/02 15:05:35 by asiguran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char  *  ft_strjoin(char const* s1, char const* s2)
{
	char * str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
 	s2_len = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (0);
	ft_strlcpy(str, s1, s1_len + 1);
	ft_strlcat(str + (s1_len), s2, s2_len + 1);
	return (str);
}
