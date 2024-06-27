/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohen <paulohen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 23:41:06 by paulohen          #+#    #+#             */
/*   Updated: 2024/06/25 12:47:39 by paulohen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i]) + 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char    str[] = "PALAVR$#34AO";
    ft_strlowcase(str);
    printf("%s", str);
}
*/
