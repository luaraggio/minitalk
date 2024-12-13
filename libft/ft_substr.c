
#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	sub = (char *)malloc(len + 1 * (sizeof(char)));
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

/*int	main(void)
{
	const char	*test = "Socorro";
	unsigned int	start = 7;
	size_t	len = 6;
	char	*inter;

	inter = ft_substr(test, start, len);
	printf("%s", inter);	
}*/
