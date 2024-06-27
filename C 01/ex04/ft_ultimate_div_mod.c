/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohen <paulohen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:15:01 by paulohen          #+#    #+#             */
/*   Updated: 2024/06/19 12:46:42 by paulohen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	primeira;
	int	segunda;

	primeira = *a;
	segunda = *b;
	*a = primeira / segunda;
	*b = primeira % segunda;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf(" divisão é %d, o resto é %d", a, b);
}
*/
