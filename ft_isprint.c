/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiguran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:51:59 by asiguran          #+#    #+#             */
/*   Updated: 2023/01/19 14:52:01 by asiguran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>

int	ft_isprint(int c)
{
	return (31 < c && c < 127);
}
