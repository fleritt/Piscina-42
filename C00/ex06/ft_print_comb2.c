/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:32:55 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/14 16:32:51 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	b = 0;
	while(a < 100)
	{
		write(1, &a, 1);
		a++;
	}
}

int main (void)
{
	ft_print_comb2();
	return 0;
}
