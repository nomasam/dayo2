#include <stdio.h>
void ft_putchar(char c){
write(1 ,&c ,1);
}
void ft_print_numbers(){
char c= '1';
	while(c<='9'){
	ft_putchar(c);
	c++;
	}
}
int main(void){
	ft_print_numbers();
	return 0 ;}
