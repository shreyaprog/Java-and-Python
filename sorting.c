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
printf("\t");
}

void sortarray(int arr[],int n){
	int i,j;
    for(i=0;i<n-1;i++){
        for( j=0;j<n-i-1;j++){
          if (arr[j] > arr[j + 1]) {
                // Swap
               int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int co,cont;
    int arr[20],n;
    do{
        printf("Enter number of elements in the array: ");
    scanf("%d", &n);
        printf("choose case(1-2)");
        scanf("%d",&co);
    switch(co){
        
        case 1:
        acceptarray(arr, n);
        
        printf("\nOriginal ");
        printarray(arr, n);
        break;
        
       
      
          
          case 2:
      sortarray(arr, n);

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

