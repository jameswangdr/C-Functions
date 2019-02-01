/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:53:40 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/30 21:44:23 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int main (int argc, char **argv)
{
	int result;

	if (argc != 4)
		printf("\n");
	if (argc == 4)
	{
		if (*argv[2] == '+')
			result = atoi(argv[1]) + atoi(argv[3]);
		else if (*argv[2] == '-')
			result = atoi(argv[1]) - atoi(argv[3]);
		else if (*argv[2] == '*')
			result = atoi(argv[1]) * atoi(argv[3]);
		else if (*argv[2] == '/')
			result = atoi(argv[1]) / atoi(argv[3]);
		else if (*argv[2] == '%')
			result = atoi(argv[1]) % atoi(argv[3]);
		(printf("%i\n", result));
	}
	return (0);
}
