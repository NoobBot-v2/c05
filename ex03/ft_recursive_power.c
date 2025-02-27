//header

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb , (power - 1)));
}
//#include <stdio.h>

//int main(void)
//{
//    int i = ft_recursive_power(12,2);
//    printf("%i",i);
//    return (0);
//}