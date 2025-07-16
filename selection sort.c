#include <stdio.h>
void acceptarray(int arr[],int n){
	int i;
    for(i=0;i<n;i++){
        printf("enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
}

void printarray(int arr[],int n){
    printf("array elements:");
    int i;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
printf("\n");
}

void selectionsort(int arr[],int n)
{
    int i,j,minindex;
    for(i=0;i<n-1;i++){
        minindex=i;
        for ( j=i+1;j<n;j++){
           
            if(arr[j]<arr[minindex]){
            minindex=j;
            
        }
    }
    if (minindex != i) {
           int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
            
    }
    }
}
int main(){
    int co,cont;
    int arr[100],n;
    do{
        printf("enter the array");
        scanf("%d",&n);
        
        printf("choose case(1-2)");
        scanf("%d",&co);
        
        switch(co){
            case 1:
            acceptarray(arr, n);
        
        printf("\nOriginal ");
        printarray(arr, n);
        break;
        
       
      
          
          case 2:
      selectionsort(arr, n);

    printf("\nSorted (Ascending) ");
    printarray(arr, n);
    break;
    
    
    default:
                printf("Invalid choice.\n");
                break;
        }

        printf("\nWould you like to continue? (Yes - 1 / No - 0): ");
        scanf("%d", &cont);

    } while (cont == 1);

    return 0;
}

