/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 00:42:41 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/22 01:53:09 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int counter;
	
	counter = 0;
	if (argc != 2)
		write(1, "a", 1);
	else
		while (argv[1][counter] != '\0') 		
		{
			if (argv[1][counter] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			else				
				counter++;
		}
		write(1, "\n", 1);
	return (0);
}
