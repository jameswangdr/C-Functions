/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ispowerof2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:20:08 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/29 21:02:17 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	if (n == 1)
		return (1);
	else
		return (0);
}	

int main ()
{
	printf("%i", is_power_of_2(69));
return (0);
}
