/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:23:37 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/31 13:27:19 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*As the normal putnbr, but with the pointer to lenght to add the
 * amount of bytes printed.*/

void	ft_printnumber(int n, int *len)
{
	if (n == -2147483648)
	{
		ft_printstr("-2147483648", len);
		return ;
	}
	else
	{
		if (n < 0)
		{
			ft_printchar('-', len);
			n *= -1;
		}
		if (n > 9)
		{
			ft_printnumber((n / 10), len);
			n %= 10;
		}
	}
	ft_printchar((n + '0'), len);
}
