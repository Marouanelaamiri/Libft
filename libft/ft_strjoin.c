/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaamir <malaamir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:59:30 by malaamir          #+#    #+#             */
/*   Updated: 2024/11/13 16:52:20 by malaamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)//this function combines two strings s1,s2
												// into a new string , it allocate enough memory
												// to hold both strings and then it copies one after the other 
												//into a new space
{
	char	*newstr;
	size_t	maxlen;

	if (!s1 || !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	maxlen = (ft_strlen(s1) + ft_strlen(s2) + 1);// we calculate the leng of the new str
	newstr = (char *)malloc(maxlen);// we allocat memory for it
	if (newstr == NULL) //if malloc fails return null
		return (NULL);
	ft_memcpy(newstr, s1, ft_strlen(s1)); // cpy the content of s1 into the new str
	ft_memcpy(&newstr[ft_strlen(s1)], s2, ft_strlen(s2));// cpy into the pos &newstr[fy_strlen(s1)] mneaing the end of the first str
	newstr[maxlen - 1] = '\0';// we set '\0' to the last byte in the new str
	return (newstr);
}
#include<stdio.h>
int main()
{
// char	*s1 = "hello";
// char	*s2 = "";
printf("The joined str using ft_strjoin is : %s\n" ,ft_strjoin("", NULL));
}