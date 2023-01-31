/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiguran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:44:14 by asiguran          #+#    #+#             */
/*   Updated: 2023/01/17 17:44:15 by asiguran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *l;

    l = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        *(l + i) = 0;
        i++;
    }
}
