#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	char comma = ',';


		while(a<='9')
		{
			while(b<='9')
			{
				while(c<='9'){

					if(a<b && b<c){
						ft_putchar('0');
						ft_putchar('0');
						ft_putchar('0');

						ft_putchar(',');
				    	ft_putchar(' ');
					}
					c++;
				} c='0'; b++;} b='0'; a++;}
		
}

	
