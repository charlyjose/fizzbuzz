
#include <stdio.h>

int main(void) {
	
	for(int i=1; i<=100; i++) {
		if(i%15==0)
			printf("\nFizzBuzz(5 and 3): %d", i);
		else if(i%5==0)
			printf("\nBuzz(5): %d", i);
		else if(i%3==0)
			printf("\nFizz(3): %d", i);
		else
			printf("\n%d", i);
	}
	return 0;
}
