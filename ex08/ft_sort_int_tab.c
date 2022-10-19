/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:06:54 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/19 19:14:37 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int i, int j)
{
	int	tmp;

	tmp = x[i];
	x[i] = x[j];
	x[j] = tmp;
}

void	quicksort_cursor_change(int *tab, int *i, int *j, int *pivot)
{
	while (1)
	{
		while (tab[*i] < *pivot)
		{
			*i += 1;
		}
		while (tab[*j] > *pivot)
		{
			*j -= 1;
		}
		if (*i >= *j)
		{
			break ;
		}
		ft_swap(tab, *i, *j);
		*i += 1;
		*j -= 1;
	}
}

void	quicksort(int *tab, int left, int right)
{
	int	pivot;
	int	i;
	int	j;

	i = left;
	j = right;
	pivot = tab[(left + right) / 2];
	quicksort_cursor_change(tab, &i, &j, &pivot);
	if (left < i - 1)
	{
		quicksort(tab, left, i - 1);
	}
	if (j + 1 < right)
	{
		quicksort(tab, j + 1, right);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	if (size == 1)
	{
		return ;
	}
	quicksort(tab, 0, size - 1);
}
