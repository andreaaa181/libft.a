/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiguran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:55:40 by asiguran          #+#    #+#             */
/*   Updated: 2023/02/09 14:46:31 by asiguran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
** This auxiliary function counts the digits of the long integer received by
** parameter.
*/

static int    ft_digit_count(long int i)
{
    int    count;

    count = 0;
    if (i < 0)
    {
        i *= -1;
        count++;
    }
    while (i > 0)
    {
        i /= 10;
        count++;
    }
    return (count);
}

char        *ft_itoa(int n)
{
    char        *str;
    int            i;
    long int    nb;

    nb = n;
    i = ft_digit_count(nb);
    if (!(str = malloc(i * sizeof(char) + 1)))
        return (0);
    str[i--] = 0;
    if (nb == 0)
    {
        str = ft_calloc(2, sizeof(char));
        str[0] = 48;
    }
    if (nb < 0)
    {
        str[0] = '-';
        nb = nb * -1;
    }
    while (nb > 0)
    {
        str[i--] = nb % 10 + '0';
        nb = nb / 10;
    }
    return (str);
}

//
//int	main(void)
//{
//	printf("%s\n", ft_itoa(123156));
//    return (0);
//}
//
