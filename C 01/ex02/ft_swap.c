/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohen <paulohen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:00:08 by paulohen          #+#    #+#             */
/*   Updated: 2024/06/17 16:10:55 by paulohen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *a;
	*a = *b;
	*b = troca;
}
/*
int	main(void)
{
	int	x = 6;
	int	y = 5;

	printf("o valor trocado é %d e %d\n", x, y);
	ft_swap(&x, &y);
	printf("o valor trocado é %d e %d", x, y);
}
*/
