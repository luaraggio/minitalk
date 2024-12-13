
#include "libft.h"

int	ft_print_pointer(void *pointer)
{
	int				i;
	char			*p;
	unsigned long	pt;

	pt = (unsigned long) pointer;
	if (pt == 0)
		return (ft_print_string("(nil)"));
	i = 0;
	p = ft_utoa_base(pt, 16, "0123456789abcdef");
	i += ft_print_string("0x");
	i += ft_print_string(p);
	free (p);
	return (i);
}
