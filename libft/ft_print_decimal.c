
#include "libft.h"

int	ft_print_decimal(int dec)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_itoa_base(dec, 10, "0123456789");
	i += ft_print_string(s);
	free(s);
	return (i);
}
