/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 22:45:42 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/30 12:12:06 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	unsigned char count;

	count = 128;
	while (count > 0)
	{
		if (octet >= count)
		{
			octet = octet - count;
			count = count/2;
			write(1, "1", 1);
		}
		else
		{
			count = count/2;
			write(1, "0", 1);
		}
	}
}	


int main()
{
	unsigned char a;
	
	a = 200;
	print_bits(a);
	return (0);
}
