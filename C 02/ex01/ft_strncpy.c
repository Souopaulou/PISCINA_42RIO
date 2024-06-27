/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohen <paulohen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:26:35 by paulohen          #+#    #+#             */
/*   Updated: 2024/06/26 11:11:43 by paulohen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
//#include <stdio.h>
/*
int	main (void)
{
	char	dest[10];
	char	src[] = "oftamolog";

	ft_strncpy(dest, src, 3);
	printf("%s", dest);
	return 0;
}
*/
