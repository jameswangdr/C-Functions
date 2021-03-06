/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 02:07:53 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/01 02:33:14 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
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
			if (check(argv[1], argv[1][i], i) == 1)
			{
				ft_putchar(argv[1][i]);
			}
			i++;
		}
		j = 0;	
		while (argv[2][j] != '\0')
		{
			if (check(argv[1], argv[2][j], i) == 1 && check(argv[2], argv[2][j], j) == 1)
			{
				ft_putchar(argv[2][j]);
			}
			j++;
		}
	}
	ft_putchar('\n');
	return(0);
}
