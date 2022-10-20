/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:05:11 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/20 20:49:04 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int calcule(int n)
{
    int i;

    i = 0;
	if (n < 0)
		i = 1;
    while (n != 0)
    {
        i++;
        n /= 10;
        //printf("%d\n", n);
    }
    return (i);
}

char *strrev(char *str)
{
    char *new;
    int i;
    size_t len;
    
    i = 0;
    len = (ft_strlen(str) - 1);
    new = (char *)malloc(sizeof(char) * (len + 2));
    while (len >= 0)
    {
        new[i] = str[len];
        i++;
        len--;
    }
    new[i] = '\0';
    return (new);
}    

/*
char    *ft_itoa(int n)
{
	char temp;
    char *new;
    int len;
	int i;

    len = calcule(n);
    new = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
    if(!new)
        return (NULL);
	if (n < 0)
	{
		new[i] = '-';
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		new[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (new);
}


char *ft_itoa2(int n)
{
    int rest;
    char *str;
    int isNegative;
    int i;

    isNegative = 0;
    i = 0;
    str = NULL;
    if (n == 0)
    {
        str[i] = '0';
        str[i + 1] = '\0';
        return (str);  
    }
    if (n < 0)
    {
        isNegative = 1;
        n *= -1;
    }
    if(!(str = (char *)malloc(sizeof(char) * n)))
        return (NULL);
    while (n != 0)
    {
        rest = n % 10;
        str[i] = rest + '0';
        n /= 10;
        i++; 
    }
    if (isNegative)
    {
        str[i] = '-';
        str[i + 1] = '\0';
    }else
    {
        str[i] = '\0';     
    }
    str = strrev(str);
    return (str);
}*/

int main()
{
	strrev("aymene");
    //printf("%s\n", ft_itoa(123));
    return (0);
}
