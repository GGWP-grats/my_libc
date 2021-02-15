#include "libft.h"

int		ft_isempty_str(char *str)
{
	while (ft_isspace(*str))
		str++;
	return (*str ? 0 : 1);
}

