#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int numbers;
    int i;

    numbers= '1';
    i= '9';
    while (numbers <= 'i')
    {
        ft_putchar(numbers);
        numbers++;
    }
}

 int main(void)
{
        ft_print_numbers();
        ft_putchar('\n');
        return (0);
}
~
~
