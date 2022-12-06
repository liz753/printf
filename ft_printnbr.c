#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		ft_printchar('-');
		ft_printnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_printnbr(nb / 10);
		ft_printnbr(nb % 10);
	}
	else
		ft_printchar(nb + 48);
	return (ft_digitlen(nb, 'd'));
}
