/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiguran <asiguran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:10:19 by asiguran          #+#    #+#             */
/*   Updated: 2023/04/04 12:17:44 by asiguran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;
	char	*ptr;

	ptr = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		ret = &ptr[i];
		if (s[i] == (char)c)
			return (ret);
		i--;
	}
	return (NULL);
}
