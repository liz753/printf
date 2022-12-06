#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	i;
	int	len;

	len = 0;
	if (!s)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
	{
		len += ft_printchar(s[i]);
		i++;
	}
	return (len);
}
