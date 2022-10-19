/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:20:09 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/19 19:09:56 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != FT_NULL)
	{
		length += 1;
		str += 1;
	}
	return (length);
}
