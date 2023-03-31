/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:31:16 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/31 13:27:25 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Every memmory adress starts by '0x', so it prints it mannually,
 * and then pass the pointer to hexadecimal.*/

void	ft_printptr(void *ptr, int *len)
{
	ft_printstr("0x", len);
	ft_printhexa((unsigned long) ptr, len, 'x');
}
