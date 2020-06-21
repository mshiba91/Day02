#include <unistd.h>
void ft_putchar(char c);

int ft_putnbr(int nb)
{
	write(1, &nb, 1);

}

void ft_print_number(void) 
{
	int m;
    int l;
	int r;
	int number;
	int nb= number;


	m = 48 - 1;
	while (++m <= 58)
	{
		l = m;
		while (++l <= 58)
		{
			r = l;
			while (++r <=58)
			{
				ft_putnbr(m);
				ft_putnbr(l);
				ft_putnbr(r);
				if (m !=55)
				{
					
					ft_putchar(',');
                    
				}
			}
		}
	}
}
 
int main()
{
	ft_print_number();
	ft_putchar('\n');
	return(0);
}
				
		


