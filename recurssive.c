#include <stdio.h>


int factorial(int num)
{
   int fact = 1;

int i;
    // Start loop from 1 to num
    for ( i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}
    

int main() {
    int co,cont;
    int num;
    do{
       
    printf("chosse case(1)");
    scanf("%d",&co);
    switch(co){
        case 1:
        printf("enter the num");
    scanf("%d",&num);
        printf("factorial of %d is %d\t",num,factorial(num));
        break;
        
        default:
        printf("invalid choice");
        break;
    }
        printf("would you like to continue? yes-1, no-0");
        scanf("%d",&cont);
       } while(cont==1);
         return 0;
}

