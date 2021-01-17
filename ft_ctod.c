#include "libft.h"

int		ft_ctod(char c)
{
	if (ft_isdigit(c))
		return (c - '0');
	return (0);
}
