//header

int ft_iterative_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= nb;
		power--;
	}
	return (nb);
}
//#include <stdio.h>

//int main(void)
//{
//    int i = ft_iterative_power(0,10);
//    printf("%i",i);
//    return (0);
//}