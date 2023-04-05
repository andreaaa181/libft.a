/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiguran <asiguran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:01:32 by asiguran          #+#    #+#             */
/*   Updated: 2023/04/03 12:55:09 by asiguran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	ft_strlcpy(dst, src, len_src + 1);
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	size = 0;
	if (s1)
		size += ft_strlen(s1);
	if (s2)
		size += ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	if (s1 && s2)
	{
		ft_strlcat(ft_strcpy(res, s1), s2, size + 1);
		return (res);
	}
	else if (s1 != NULL && s2 == NULL)
		return (ft_strcpy(res, s1));
	else if (s1 == NULL && s2 != NULL)
		return (ft_strcpy(res, s2));
	else
		return (NULL);
}
