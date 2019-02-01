/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:21:41 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/29 19:48:53 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str)
{
	int counter;
	int back;
	char temp;

	counter = 0;
	back = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	while (back < counter - 1)
	{
		temp = str[counter - 1];
		str[counter - 1] = str[back];
		str[back] = temp;
		counter--;
		back++;
	}
	return (str);
}

int main ()
{
	char string[] = "12345";
	printf("%s\n", ft_strrev(string));
	return (0);
}
