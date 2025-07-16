#include <stdio.h>
void dectooct(int num)
{
    int pow=1;
    int ans=0;
    while(num>0){
        int rem=num%8;
        num=num/8;
        
        ans+=(rem*pow);
        pow=pow*10;
    }
     printf("the ans is %d",ans);
}
int main() {
   int num;
    printf("enter the num ");
    scanf("%d",&num);
     dectooct(num);
 
    return 0;
}

