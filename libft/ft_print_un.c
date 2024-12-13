
#include "libft.h"

int	ft_print_un(unsigned int n)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_utoa_base(n, 10, "0123456789");
	i = ft_print_string(s);
	free (s);
	return (i);
}
