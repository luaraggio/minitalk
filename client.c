/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:46:02 by lraggio           #+#    #+#             */
/*   Updated: 2024/04/09 17:29:44 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	send_char_bit_by_bit(int pid, char c)
{
	int	i;

	i = 8;
	while (i--)
	{
		if (((c >> i) & 1) == 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	pid;

	i = 0;
	if (argc != 3)
	{
		ft_printf("Invalid format.\n");
		ft_printf ("It must be: ./server + 'server_pid' + message");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
	{
		send_char_bit_by_bit(pid, argv[2][i]);
		i++;
	}
	send_char_bit_by_bit(pid, '\n');
}
