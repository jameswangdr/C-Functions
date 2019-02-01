/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 13:20:54 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/30 18:55:11 by jamwang          ###   ########.fr       */
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
	while (counter < i )
	{
		if (string[counter] == c )
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
			if (check(argv[1], argv[1][i], i) == 1)
				ft_putchar(argv[1][i]);	
			i++;
		}
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (check(argv[2], argv[2][j], j) == 1 && check(argv[1], argv[2][j], i) == 1)
					ft_putchar(argv[2][j]);
				j++;
		
			}
		}
	ft_putchar('\n');
}
