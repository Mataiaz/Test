/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dotheloop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 18:21:35 by mathias           #+#    #+#             */
/*   Updated: 2020/06/10 14:41:51 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(0, &c, 1);
}

int		main(void)
{
	int count;

	count = (122);
	while (count >= 97)
	{
		ft_putchar(count);
		count--;
	}
	ft_putchar('\n');
	return (0);
}
