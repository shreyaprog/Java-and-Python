  #include <stdio.h>
#include <string.h>
void compare(char s1[],char s2[])
{
   
        if (strcmp(s1,s2)==0)
       {
           printf("both are equal");
            
        }
        else{
         printf("not equal");
       }
}
void lenstr(char s1[],char s2[])
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    if(len1>len2)
        printf("len 1 is longer");
    else if(len2>len1)
  printf("len 2 is longer");
  else
  printf("both are equal");
}

void con(char s1[],char s2[])
{
    
    strcat(s1, s2);
    printf("Concatenated string: %s\n", s1);
}

void substr(char s1[],char s2[])
{
     int i, j, count = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (s1[i + j] != s2[j])
                break;
        }
        if (j == len2)
            count++;
    }

    printf("The substring '%s' appears %d times in the main string.\n", s2, count);


}
int main(){
    int co,cont;
    do{
        printf("choose case (1-4) ");
        
        scanf("%d",&co);
        char s1[100],s2[100];
        
        switch(co)
        {
        case 1:
        printf("enter string s1");
        scanf("%s",&s1);
        printf("enter string s2");
        scanf("%s",&s2);
        compare(s1,s2);
        break;
        case 2:
        printf("enter string s1");
        scanf("%s",&s1);
        printf("enter string s2");
        scanf("%s",&s2);
        lenstr(s1,s2);
        break;
        
         case 3:
        printf("enter string s1");
        scanf("%s",&s1);
        printf("enter string s2");
        scanf("%s",&s2);
        con(s1,s2);
        break;
        
        case 4:
         printf("Enter the main string: ");
                getchar();  // Clears buffer before fgets
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';  // Remove newline

                printf("Enter the substring to search: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';  // Remove newline

                substr(s1, s2);
                break;
    }
    printf("would you like to continue? yes-1 no-0");
    scanf("%d",&cont);
}while(cont==1);
    return 0;
}
  

