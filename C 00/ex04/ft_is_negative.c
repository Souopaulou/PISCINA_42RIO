/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohen <paulohenriquex2023@gmail.com>     +#+ +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:12:53 by paulohen          #+#    #+#             */
/*   Updated: 2024/06/14 12:26:38 by paulohen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P\n", 1);
	}
	else
	{
		write(1, "N\n", 1);
	}
}

int	main(void)
{
	ft_is_negative(0);
}

