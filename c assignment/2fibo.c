#include <stdio.h>
#include"experiment.h"

int main(){
	int n ;
    scanf("%d",&n);
    if(fibonacci(n))
	printf("fibonacci");
    else{
        printf("not fibonacci");}
}