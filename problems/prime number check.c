#include <stdio.h>

void main() {
	int i, count, n;
	
	printf("Enter value of n:\n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
		if (i%2==0)
			count++;
			
	if (count==2)
		printf("%d is prime number.", n);
	else
		printf("%d is not a prime number.", n);
}
