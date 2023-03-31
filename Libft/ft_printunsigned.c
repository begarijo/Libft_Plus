/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:33:17 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/31 13:27:39 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The only thing to take 'care', is there's not going to be any
 * negative number, so only in case is two digits, it calls printnumber to
 * print it.*/

void	ft_printunsigned(unsigned int n, int *len)
{
	if (n > 9)
	{
		ft_printnumber(n / 10, len);
		n %= 10;
	}
	ft_printchar((n + '0'), len);
}
