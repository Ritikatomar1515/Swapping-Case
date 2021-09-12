#include<stdio.h>
#include<conio.h>

int main()
{
    int a , b;
	a = 45; 
	b = 25;	
	
	printf("value of a and b before swapping is : \n");
	printf(" a is : %d \n" , a);
	printf(" b is : %d \n" , b);
	
	int temp = a;
	a = b;
	b = temp;
	
	
	printf("value of a and b after  swapping is : \n");
	printf(" a is : %d \n" , a);
	printf(" b is : %d \n" , b);
	
	
	return 0;
	

}
