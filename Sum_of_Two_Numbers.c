#include <stdio.h>

int sum(int a, int b) {

int add=a+b;

return add;
}
int main()

{

int a,b;

printf("Enter the two numbers: ");

scanf("%d %d", &a,&b);

int res=sum(a,b);

printf("\nSum is:%d", res);

return 0;

}