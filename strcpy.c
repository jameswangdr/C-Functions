/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:40:54 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/25 12:37:40 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int counter;

	counter = 0;

	while (s2[counter] != '\0')
	{
		s1[counter] = s2[counter];
		counter++;
	}
	s1[counter] = s2[counter];
	return (s1);
}

int main ()
{
	char *s1[5]; 
	char *s2[5];	"asdf";
   	s2 = "fuck";

	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	return (0);
