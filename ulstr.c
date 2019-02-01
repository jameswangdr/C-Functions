/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:28:36 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/24 01:56:58 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int main (int argc, char **argv)
{
	int counter;

	if (argc != 2)
		ft_putchar('\n');
	if (argc == 2)
	{
		counter = 0;
		while(argv[1][counter] != '\0')
		{
			if (argv[1][counter] >= 'a' && argv[1][counter] <= 'z')
			{	
				ft_putchar(argv[1][counter] - 32);
				counter++;	
			}
			else if (argv[1][counter] >= 'A' && argv[1][counter] <= 'Z')
			{
				ft_putchar(argv[1][counter] + 32);
				counter++;
			}
			else
			{
				ft_putchar(argv[1][counter]);
				counter++;
			}
		}
	ft_putchar('\n');
	}
	return (0);
}
