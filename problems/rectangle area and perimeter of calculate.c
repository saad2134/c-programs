#include <stdio.h>

void main()
    {
        int l, b, p, a;
		
		printf("\nEnter the length of the rectangle: ");
		scanf("%d", &l);
		printf("\nEnter the breadth of the rectangle: ");
		scanf("%d", &b);
		
		p = 2*(l+b);
		a = l*b;
		
		printf("\nThe perimeter of the rectangle: %d \n", p);
        	printf("\nThe area of the rectangle: %d \n", a);
		
	
    }
