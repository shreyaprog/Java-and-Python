#include <stdio.h>
void dectobin(int num)
{
    int pow=1;
    int ans=0;
    while(num>0){
        int rem=num%2;
        num=num/2;
        
        ans+=(rem*pow);
        pow=pow*10;
    }
     printf("the ans is %d",ans);
}
int main() {
   int num;
    printf("enter the num ");
    scanf("%d",&num);
    dectobin(num);
 
    return 0;
}

