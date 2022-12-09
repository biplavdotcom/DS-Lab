#include <stdio.h> 

int gcdExtended(int a, int b, int* x, int* y) 
{ 
	if (a == 0) { 
		*x = 0; 
		*y = 1; 
		return b; 
	} 

	int x1, y1; 
	int gcd = gcdExtended(b % a, a, &x1, &y1); 

	
	*x = y1 - (b / a) * x1; 
	*y = x1; 

	return gcd; 
} 


int main() 
{ 
	int a,b,x=1, y=1; 
	
	printf("\nEnter num1 and num2: ");
    scanf("%d  %d", &a,&b);
	
	
	int g = gcdExtended(a, b, &x, &y); 
	
	printf("\n\nGCD(%d, %d) = %d", a, b, g); 
	
	printf("\n\nThe Extended Euclidean Algorithm is: "); 
	printf("  %d = %d * %d + %d * %d ", g,x,a,y,b); 
	
	return 0;
} 