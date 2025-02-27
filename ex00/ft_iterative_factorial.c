//header

int ft_iterative_factorial(int nb)
{
    int sum;

    if (nb < 0)
        return (0);
    sum = 1;
    while (nb > 0)
    {
        sum *= nb;
        nb--;
    }
    return (sum);
}

//#include <stdio.h>

//int main(void)
//{
//    int i = ft_iterative_factorial(1);
//    printf("%i",i);
//    return (0);
//}