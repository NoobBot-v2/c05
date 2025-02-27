//header

int ft_sqrt(int nb)
{
    int n;

    if (nb < 0)
        return (0);
    n = 0;
    while (n * n <= nb)
    {
        if (n * n == nb)
            return (n);
        n++;
    }
    return (0);
}

//#include <stdio.h>

//int main(void)
//{
//	printf("%i",ft_sqrt(26));
//	return (0);
//}