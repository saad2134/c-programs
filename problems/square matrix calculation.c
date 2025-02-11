#include <stdio.h>

int msize = 0;



void detsquarematrix(size)
	{
		int a1, a2, a3, b1, b2, b3, c1, c2, c3;
		int det;
			
		if (size == 2)
			{
			
				printf("\nEnter elements of 2x2 Matrix: \n");
				scanf("%d%d%d%d", &a1, &b1, &a2, &b2);	
				
				printf("\nEntered matrix is:");
				printf("\n| %d %d |", a1, b1);
				printf("\n| %d %d |", a2, b2);
				
				det = (a1*b2) - (b1*a2);
				printf("\n\nThe determinant of the above matrix is %d\n", det);
		
			}
		else if (size == 3)
			{
				printf("\nEnter elements of 3x3 Matrix: \n");
				scanf("%d%d%d%d%d%d%d%d%d", &a1, &b1, &c1, &a2, &b2, &c2, &a3, &b3, &c3);	
				
				printf("\nEntered matrix is:");
				printf("\n| %d %d %d |", a1, b1, c1);
				printf("\n| %d %d %d |", a2, b2, c2);
				printf("\n| %d %d %d |", a3, b3, c3);
				
				det = a1*((b2*c3)-(c2*b3)) - b1*((a2*c3)-(c2*a3)) + c1*((a2*b3)-(b2*a3));
				printf("\n\nThe determinant of the above matrix is %d\n", det);	
			}
		else 
			printf("Invalid Option");
	}

void main()
	{
		printf("Select an option:\nEnter 2 for 2x2 Matrix\nEnter 3 for 3x3 Matrix\n"); 
		scanf("%d", &msize);
		
		
		detsquarematrix(msize);	
			
	}
