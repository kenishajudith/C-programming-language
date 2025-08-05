#include <stdio.h>

int isprime (int n)

{

for(int i=2;i<=n/2;i++)

if(n%i==0)

return 0;

}

return 1;

}

int main()

{

int n;

printf ("Enter a number: ");

scanf("%d",&n);

int res-isprime(n);

if (res==0)

printf("\nIt is not a prime number");

else

printf("\nIt is a prime number");

return 0;

}