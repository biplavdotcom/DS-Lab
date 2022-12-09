
#include <stdio.h>  
int gcd(int a, int b) 
{ 
	if (a == 0) 
			return b; 
	else
		return gcd(b%a, a); 
} 


int main() 
{ 
	int a,b;
	
	printf("\nEnter num1 and num2 to find gcd(): ");
    scanf("%d  %d", &a,&b);
    
	printf("\nGCD(%d, %d) = %d", a, b, gcd(a, b)); 
	
	return 0; 
}
