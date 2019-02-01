/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:42:38 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/24 17:28:35 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main (int argc, char **argv)
{
	int counter;

	if (argc != 4)
		ft_putchar('\n');
	if ((argc == 4) && (argv[2][1] == '\0') && (argv[3][1] == '\0'))
	{
		counter = 0;
		while (argv[1][counter] != '\0')
		{
			if (*argv[2] != argv[1][counter])
			{	
				ft_putchar(argv[1][counter]);
				counter++;
			}
			if (*argv[2] == argv[1][counter])
			{
				argv[1][counter] = *argv[3];
				ft_putchar(argv[1][counter]);
				counter++;
			}	
		}
	}
	ft_putchar('\n');
}
