#include <stdio.h>

void main()
    {
        int n;
		
		printf("\nEnter a number: ");
		scanf("%d", &n);
		
		if (n % 2 == 0)
			printf("\nThe number is even.\n");
		else 
			printf("\nThe number is odd.\n");
		
    }

