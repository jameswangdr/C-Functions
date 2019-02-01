/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 00:34:38 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/31 01:08:27 by jamwang          ###   ########.fr       */
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

	if (argc < 2)
		ft_putchar('\n');
	if (argc >= 2)
	{
		counter = 0;
		while (argv[argc - 1][counter] != '\0')
		{
			ft_putchar(argv[argc - 1][counter]);
			counter++;
		}
	ft_putchar('\n');
	}
}
