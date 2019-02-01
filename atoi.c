/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 21:04:26 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/31 17:28:25 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	long result;
	int counter;
	int sign;

	result = 0;
	counter = 0;
	sign = 1;
	
	while (str[counter] <= 32)
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-') 
		{
			sign = -1;
			counter++;
		}
		else
			counter++;
	}
	while (str[counter] != '\0' && str[counter] >= '0' && str[counter] <= '9')
	{
		result = (result * 10) + (str[counter] - '0');
		counter++;
	}
	result = result * sign;
	return ((int)result);
}

int main()
{
	const char *test;

	test = " \n \t \v \f\r \n+2222222222";	
	printf("%i\n",  ft_atoi(test));
	printf("%i\n", atoi(test));
return (0);
}
