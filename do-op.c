/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 21:57:11 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/31 23:09:56 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	int result;

	if (argc != 4)
		printf("\n");
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			result = atoi(argv[1]) + atoi(argv[3]);
		if (argv[2][0] == '-')
			result = atoi(argv[1]) - atoi(argv[3]);
		if (argv[2][0] == '*')
			result = atoi(argv[1]) * atoi(argv[3]);	
		if (argv[2][0] == '/')
			result = atoi(argv[1]) / atoi(argv[3]);
		if (argv[2][0] == '%')
			result = atoi(argv[1]) % atoi(argv[3]);
	}
	printf("%i\n", result);
	return(0);
}
