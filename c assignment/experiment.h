#include <math.h>
#include <stdio.h>

int factorial(int n){
	int factorial=1;
   for (int i=n;i>0 ; i--){
       factorial*=i;
   }
   
   printf("Factorial of %d is %lld\n", n, factorial);
}


int fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: ");
    
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }


}

int pattern(int n) {
    int i, space, j;
    for(i = 1; i <= n; i++) {
        for(space = 1; space <= n-i; space++)
            printf(" ");
        for(j = 1; j <= (2*i-1); j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
