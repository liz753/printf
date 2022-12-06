#include "ft_printf.h"

int	ft_printpointer(size_t ptr)
{
	int	len;

	len = ft_digitlen(0, 'p');
	len += ft_printstr("0x");
	len += ft_printhex((unsigned long)ptr, 0);
	return (len - 1);
}
