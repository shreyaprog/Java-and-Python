#include <stdio.h>
    void checkPrime(int num)
    {
           int i=2;
            while (i<num){
            if(num%i!=0){
                i++;
                continue;
            }else
             break;
            }
            if(i<num)
            printf("composite number\n");
            else
            printf("prime number\n");
    }
    void checkEven(int num)
    {
        if(num%2==0)
            printf("even number");
            
            else
            printf("odd number");
    }
    void checkFibonacci(int num)
    {
       int temp;
        int a=0;
       int  b=1;
        printf("fibonacci series:%d\n");
        int i;
        for(i=0;i<num;i++)
        {
            if(i<1)
            temp=i;
        
            else
            temp=a+b;
            a=b;
            b=temp;
        
        printf("%d\t",temp);
        }
    }
int main() {
    
    int cont,co;
   do{
       printf("choose case(1-3)\n");
     
       scanf("%d",&co);
        int num;
        
        switch(co)
        {
            case 1:
           printf("enter the number:\n");
           scanf("%d",&num);
           checkPrime(num);
           
            break;
            case 2:
            
            printf("enter the number:\n");
           scanf("%d",&num);
           checkEven(num);
            break;
            case 3:
            {
            printf("enter terms:\n");
            scanf("%d",&num);
            if(num<0){
                printf("enter a non negative number:\n");
                return 1;
            }
            checkFibonacci(num);
            }
            break;
            default:
            {
            printf("invalid");
            }
            break;
        }
        printf("would you like to continue? yes-1, no-0\n");
        scanf("%d",&cont);
   }while(cont==1);
   return 0;   
}
   

