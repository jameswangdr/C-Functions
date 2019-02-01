/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 12:22:14 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/01 00:17:17 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
	int i;
	int ls;

	if (argc != 2)
		ft_putchar('\n');
	if (argc == 2)
	{
		i = 0;
		ls = 0;
		while (argv[1][i] != '\0')
		{
			if((argv[1][i + 1] >= 65 && argv[1][i+1] <= 122) && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				ls = i + 1;
				i++;
			}
			else
				i++;
		}	
		while (argv[1][ls] != '\0')
		{
			if (argv[1][ls] == ' ' || argv[1][ls] == '\t')
				break;
			else
			{
				ft_putchar(argv[1][ls]); 
				ls++;
			};
		}
	ft_putchar('\n');
	}
	return (0);
}
