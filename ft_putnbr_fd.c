/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytalai <ytalai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:57:26 by ytalai            #+#    #+#             */
/*   Updated: 2024/11/22 00:08:04 by ytalai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	str[12];
	long	nb;

	nb = n;
	if (fd < 0)
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	i = 0;
	while ((nb / 10) != 0)
	{
		str[i] = ((nb % 10) + 48);
		i++;
		nb = nb / 10;
	}
	str[i] = ((nb % 10) + 48);
	while (i >= 0)
	{
		write(fd, &str[i], 1);
		i--;
	}
}
