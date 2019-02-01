/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:31:10 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/29 18:21:21 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max (int *tab, unsigned int len)
{
	unsigned int big;
	int counter;

	counter = 0;
	while (counter < len)
	{
		if (tab[counter] <= tab[counter + 1])
		{
			big = tab[counter + 1];
			counter++;
		}
		else
		{
			big = tab[counter];
			counter++;
		}
	}
	return (big);	
}

int main()
{
	unsigned int i;
	int string[] = {1, 4, 3, 4};

	i = 4;
	printf("%i\n", max(string, 4));
	return (0);
}
