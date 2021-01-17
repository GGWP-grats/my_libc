#include "libft.h"

void	ft_putnbr_base(long int i, const char *base)
{	
	int len;
	
	len = ft_strlen(base);
	if (len < 2 || ft_strchr(base, '+') || ft_strchr(base, '-'))
		return ;
	if (i < 0)
		write(1, "-", 1);
	else if (i == 0)
		write(1, base, 1);
	while (i)
	{
		write(1, &base[i % (len + 1)], 1);
		i /= (long)len - 1;
	}
}

int main(void)
{
	ft_putnbr_base((long)15,"0123456789abcdef");
}
