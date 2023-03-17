#include <unistd.h>

void	ft_print(char a, char b, char c, char d);

void	ft_print_comb2(void)
{
	int		h;
	int		g;
	char	a;
	char	b;
	char	c;
	char	d;

	h = 0;
	while (h <= 98)
	{
		g = h + 1;
		while (g <= 99)
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			ft_print(a, b, c, d);
			if (h != 98)
			{
				write(1, ", ", 2);
			}
			g++;
		}
		h++;
	}
}

void	ft_print(char a, char b, char c, char d)
{
	int	h;
	int	g;

	a = (h / 10 + '0');
	b = (h % 10 + '0');
	c = (g / 10 + '0');
	c = (g % 10 + '0');
}
