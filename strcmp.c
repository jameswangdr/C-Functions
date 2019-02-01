/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:51:25 by jamwang           #+#    #+#             */
/*   Updated: 2019/01/29 20:19:18 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int counter;
	int result;
	
	counter = 0;
	result = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0' && s2[counter] != '\0')
		counter++;
	result = s1[counter] - s2[counter];
	return (result);
}
