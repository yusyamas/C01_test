/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:26:56 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/19 19:11:04 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	*tab_swap;

	i = 0;
	tab_swap = tab + size - 1;
	while (i < size / 2)
	{
		ft_swap(tab, tab_swap);
		tab += 1;
		tab_swap -= 1;
		i += 1;
	}
}
