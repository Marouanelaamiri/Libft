/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaamir <malaamir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:09:01 by malaamir          #+#    #+#             */
/*   Updated: 2024/12/17 18:06:22 by malaamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;

	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
}
int main()
{
	const char *s = "Hello World";
	const char *reject = "d";
	printf("%zu\n", ft_strcspn(s, reject));
	return 0;
}