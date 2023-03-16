#include    <unistd.h>

void ft_print_comb(void)
{
    char    h;
    char    g;
    char    a;

    h = '0';
    while(h <= '7')
    {
        g = h + 1;
        while(g <= '8')
        {
            a = g + 1;
            while(a <= '9')
            {
                write(1, &h, 1);
                write(1, &g, 1);
                write(1, &a, 1);
                if(h != '7')
                {
                    write(1, ", ", 2);
                }
            a++;
            }
        g++;
        }
    h++;
    }
}
