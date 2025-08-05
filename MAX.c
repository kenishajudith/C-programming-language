#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int ar[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &ar[i]);
    }

    int temp, i = 0, j = N - 1;
    for(i = 0; i < j; i++) {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        j--;
    }

    printf("number\n");
    for(int i = 0; i < N; i++)
        printf("%d ", ar[i]);

    return 0;
}
