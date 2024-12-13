
#include "libft.h"

int	ft_print_lowerx(unsigned int n)
{
	int		i;
	char	*x;

	x = ft_utoa_base(n, 16, "0123456789abcdef");
	i = ft_print_string(x);
	free(x);
	return (i);
}

int	ft_print_upperx(unsigned int n)
{
	int		i;
	char	*x;

	x = ft_utoa_base(n, 16, "0123456789ABCDEF");
	i = ft_print_string(x);
	free(x);
	return (i);
}
