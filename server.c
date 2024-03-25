#include "minitalk.h"

/* 
Shift the character left and set the least
significant bit to 1 if the signal is SIGUSR1;
otherwise, shift the character left and set the
least significant bit to 0.
*/

void    handle_signal(int signal)
{
    static int      i;
    static unsigned char    c;

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

int     main(int argc, char **argv)
{
    (void)argv;
    if (argc == 1)
    {
		ft_printf(" PID: %d\n", getpid());
        while (1)
		{
			signal(SIGUSR1, handle_signal);
			signal(SIGUSR2, handle_signal);
		}
    }
    else
        printf("Invalid format. It must be: ./server\n");
    return (0);    
}
