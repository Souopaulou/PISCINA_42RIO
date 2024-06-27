/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohen <paulohen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:27:56 by paulohen          #+#    #+#             */
/*   Updated: 2024/06/18 15:10:07 by paulohen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 35;
	b = 3;
	div = 0;
	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("div é %d e mod é %d", div, mod);
}
*/
