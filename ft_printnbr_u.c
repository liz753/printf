#include "ft_printf.h"

int	ft_printnbr_u(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
	{
		len += ft_printnbr_u(nb / 10);
		len += ft_printnbr_u(nb % 10);
	}
	else
		len += ft_printchar(nb + 48);
	return (len);
}
