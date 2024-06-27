/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohen <paulohen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:26:23 by paulohen          #+#    #+#             */
/*   Updated: 2024/06/24 15:21:21 by paulohen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char    str[] = "";
    ft_str_is_lowercase(str);
    printf("%d", ft_str_is_lowercase(str));
}
*/
