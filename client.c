/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:25:37 by lraggio           #+#    #+#             */
/*   Updated: 2024/03/25 20:32:05 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	send_signal(int pid, unsigned char c)
{
	int		i;
	char	tmp;

	i = 8;
	while (i--)
	{
		if ((c >> i & 1) == 1)
		{
			kill(pid, SIGUSR1);
		}
		else
			kill(pid, SIGUSR2);
		usleep(200);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	pid;

	i = 0;
	if (argc == 3)
	{
		while (argv[2])
		{
			pid = ft_atoi(argv[1]);
			send_signal(argv[2][i], pid);
			i++;
		}
	}
	else
	{
		ft_printf("Invalid format.\n");
		ft_printf ("It must be: ./server + 'server_pid' + message");
		exit(EXIT_FAILURE);
	}
	return (0);
}
