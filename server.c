/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:46:09 by lraggio           #+#    #+#             */
/*   Updated: 2024/04/09 17:18:29 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	handle_signal(int signal)
{
	static char	c = 0;
	static int	i = 0;

	if (signal == SIGUSR2)
		c = c << 1;
	else
		c = c << 1 | 1;
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		c = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		ft_printf("PID: %d\n", getpid());
		while (1)
		{
			signal(SIGUSR1, handle_signal);
			signal(SIGUSR2, handle_signal);
		}
	}
	ft_printf("Invalid format. It must be: ./server\n");
}
