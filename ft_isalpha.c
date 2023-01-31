/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiguran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:44:46 by asiguran          #+#    #+#             */
/*   Updated: 2023/01/26 14:19:10 by asiguran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		if (c >= 'a' && c <= 'z')
			return (1);
	return (0);
}
