/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 18:37:01 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/31 18:46:00 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int main (int argc, char **argv)
{
	int i;

	if (argc != 2)
		ft_putchar('\n');
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i + 1] != '\0')
			i++;
		while (i >= 0)
		{
			ft_putchar(argv[1][i]);
			i--;
		}
	ft_putchar('\n');
	}
}
