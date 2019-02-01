/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:56:56 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/31 23:10:20 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int check (char *string, char c, int i)
{
	int counter;

	counter = 0;
	while (counter < i)
	{
		if (string[counter] == c)
			return (0);
		counter++;
	}
	return (1);
}

int main (int argc, char **argv)
{
	int i;
	int j;

	if (argc != 3)
		ft_putchar('\n');
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{	
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (check(argv[1], argv[1][i], i) == 1 && (argv[1][i] == argv[2][j]))
				{
					ft_putchar(argv[1][i]);
					break;
				}
				j++;
			}	
		i++;
		}
	ft_putchar('\n');
	}	
}


write(1, &argv[1][i], 1)
