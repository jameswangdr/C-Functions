/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 01:07:38 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/01 03:24:11 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int check (char *str, char c, int i)
{
	int counter;

	counter = 0;
	while (counter < i)
	{
	 	if (str[counter] == c)
		   return (0);
		counter++;
	}
	return (1);
}

int main (int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if ((check(argv[1], argv[1][i], i) == 1) && (argv[1][i] == argv[2][j])) 
				{
					ft_putchar(argv[1][i]);
					break;
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
