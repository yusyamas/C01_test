/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:11:55 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/19 19:07:13 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_sub;
	int	b_sub;

	a_sub = *a / *b;
	b_sub = *a % *b;
	*a = a_sub;
	*b = b_sub;
}