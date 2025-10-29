#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	i;

    i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
    //Si start est hors de chaine
	if (start >= s_len)
		return (ft_strdup(""));
    //Si len depasse fin de chaine
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
