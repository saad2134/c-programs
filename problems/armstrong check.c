#include <stdio.h>

/*
n = given number
m = copy of n
d = last digit
s = armstrong sum

*/

int armstrongchk(int n) {
	int m, d, s;
	m = n;
	
	while (n>0) {
		d = n%10;
		s = s+(d*d*d);
		n = n/10;
	}
	
	if (s==m)
		return 1;		
}

void main() {
	int i=1, res, upto = 1000;
	
	while (i<=1000) {
		res = armstrongchk(i);
		
		if (res==1) {
			printf("%d, ", i);
		}
		i = i+1;
	}	
	
}



