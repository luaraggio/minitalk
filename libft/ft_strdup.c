
#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*(dest)++ = *(src)++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*ss;

	ss = (char *) s;
	dup = malloc((ft_strlen(ss) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, ss);
	return (dup);
}
