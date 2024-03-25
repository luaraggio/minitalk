#include "minitalk.h"

void     send_signal(int pid, unsigned char c)
{
    int     i;
    char    tmp;

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

int     main(int argc, char **argv)
{
    int     i;
    int     pid;

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
        ft_printf("Invalid format. It must be: ./server + 'server_pid' + message\n");
        exit(EXIT_FAILURE);
    }
    return (0);
}