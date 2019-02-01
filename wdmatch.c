/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:06:22 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/30 20:53:29 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		ft_putchar(s1[i]);
		i++;
	}
		
}

int check (char *s1, char *s2) 
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s2[j] == '\0')
		{
			break;
		}
		else 
		{
			if (s1[i] == s2[j])
			{
				i++;
				j++;
			}
			if (s1[i] != s2[j])
				j++;
		}
	}	
	if (s1[i] == '\0')
		return (1);
	else
		return (0);
}

int main (int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	if (argc == 3)
	{
		if (check(argv[1], argv[2]) == 1)
			ft_putstr(argv[1]);
		else
			ft_putchar('\n');
	ft_putchar('\n');
	}
	return (0);
}
