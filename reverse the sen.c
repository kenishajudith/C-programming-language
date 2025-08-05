#include<stdio.h>
 int main()
 {
    char str[100];
    printf("Enter the input:");
    scanf("%[^\n]s",str);// Old is Gold
    char strtostr[100][100];
    int i=0,j=0,k=0;
    while(i<strlen(str))
    {
         if(str[i]!=32){
         strtostr[j][k] = str[i];
         k++;
         }
         else{
            j++;
            k=0;
         }
         i++;
    }
    for(int i=j;i>=0;i--)
        printf("%s ",strtostr[i]);

 }
