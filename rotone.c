/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:56:50 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/24 14:10:35 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
	int counter;
	
	if (argc != 2)
		ft_putchar('\n');
	if (argc == 2)
	{	
		counter = 0;
		while (argv[1][counter] != '\0')
			if (argv[1][counter] >= 'a' && argv[1][counter] <= 'y')
			{
				ft_putchar(argv[1][counter] + 1);
				counter++;
			}
			else if (argv[1][counter] == 'z')
			{
				ft_putchar(argv[1][counter] - 25);
				counter++;
			}
			else if (argv[1][counter] >= 'A' && argv[1][counter] <= 'Y')
			{	
				ft_putchar(argv[1][counter] + 1);
				counter++;
			}
			else if (argv[1][counter] == 'Z')
			{
				ft_putchar(argv[1][counter] - 25);
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
