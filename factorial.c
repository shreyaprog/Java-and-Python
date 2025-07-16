#include <stdio.h>
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    
    
    return fact(n-1)*n;
}
int main() {
    int co,cont;
    do{
        int n;
        printf("enter the number");
        scanf("%d",&n);
        printf("choose case(1)") ;
        scanf("%d",&co);
        switch(co)
        {
            case 1:
            printf("factorial of %d is %d\t",n,
                        fact(n));
        }
    
 printf("would u like to continue? yes-1 no-0");
           }while(cont==1);
           scanf("%d",&cont);
    return 0;
}

