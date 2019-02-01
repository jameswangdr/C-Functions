/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:32:15 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/23 23:53:41 by jamwang          ###   ########.fr       */
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
	int n;

	if (argc != 2)
		ft_putchar('\n');
	if (argc == 2)
	{
		counter = 0;
		while (argv[1][counter] != '\0')
		{
			if (argv[1][counter] >= 'A' && argv[1][counter] <= 'Z')
				n = argv[1][counter] - 'A' + 1;
			else if (argv[1][counter] >= 'a' && argv[1][counter] <= 'z')
				n = argv[1][counter] - 'a' + 1;
			else	
				ft_putchar(argv[1][counter]);
			while (n > 0)
			{
				ft_putchar(argv[1][counter]);
				n--;
			}
			counter++;
		}
		write (1, "\n", 1);
	}
}
