#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Malasree";
    char b[] = "Divya";
    int alp1[26] = {0};
    int alp2[26] = {0};
    
    for (int i = 0; i < strlen(a); i++) {
        alp1[a[i] - 'a']++;
    }

    for (int i = 0; i < strlen(b); i++) {
        alp2[b[i] - 'a']++;
    }
    
    if (strcmp(a, b) == 0) {
        printf("Not...");
    } else {
        for (int i = 0; i < 26; i++) {
            if (alp1[i] != alp2[i]) {
                printf("Not...");
                return 0;
            }
        }
        printf("Yes...");
    }

    return 0;
}
