/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 17:59:35 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/24 20:23:09 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
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
		while (argv[1][counter] == ' ')
			counter++;
		while (argv[1][counter] != '\0')
		{
			if (argv[1][counter] == ' ')
				break;
			else 
			{
				ft_putchar(argv[1][counter]);
				counter++;
			}
		}
	ft_putchar('\n');
	}
}
