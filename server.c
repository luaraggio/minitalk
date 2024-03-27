/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:25:45 by lraggio           #+#    #+#             */
/*   Updated: 2024/03/25 20:35:35 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	handle_signal(int signal)
{
	static int	i;
	static char	c;

	i = 0;
	if (signal == SIGUSR1)
		c <<= 1;
	else if (signal == SIGUSR2)
		c = (c << 1) | 1;
	if (i == 8)
	{
		ft_printf("%c", c);
		i = 0;
		c = 0;
	}
}

// Set up the signal handlers and wait for signals indefinitely.

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
	else
		ft_printf("Invalid format. It must be: ./server\n");
	return (0);
}
