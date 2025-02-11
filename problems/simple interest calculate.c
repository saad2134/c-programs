#include <stdio.h>

void main()
    {
        int p, t, r, si, ta;
		
		printf("\nEnter the principle amount: ");
		scanf("%d", &p);
		printf("\nEnter the time in years: ");
		scanf("%d", &t);
        	printf("\nEnter the rate of interest per annum: ");
		scanf("%d", &r);
		
		si = (p*t*r)/100;
		ta = p+si;
		
		printf("\nThe simple interest on %d with a rate of interest of %d percent per annum for %d years is %d. Hence the total amount in the end will be %d. \n", p, r, t, si, ta);

		
	
    }
