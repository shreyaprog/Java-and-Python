#include <stdio.h>
void bintodec(int num)
{
    int pow=1;
    int ans=0;
    while(num>0){
        int rem=num%10;
        num=num/10;
        
        ans+=(rem*pow);
        pow=pow*2;
    }
     printf("the ans is %d",ans);
}
int main() {
   int num;
    printf("enter the num ");
    scanf("%d",&num);
     bintodec(num);
 
    return 0;
}

