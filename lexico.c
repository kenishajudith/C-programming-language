#include <stdio.h>

int strCmp11(char *s1, char *s2) {
  
    // Traverse both strings until a mismatch
  	// is found or one of the string ends
    while (*s1 && (*s1 == *s2)) {
      
        // Move to the next character in str1
        s1++;  
        s2++;
    }

    // If both are equal, this will return 0
    return (*s1 - *s2);//0-equal
}

int main() {
    char s1[] = "India";
    char s2[] = "India";

    int res = strCmp11(s1, s2);

    if (res < 0) {
        printf("\"%s\" is lexicographically smaller than \"%s\".\n", s1, s2);
    } else if (res > 0) {
        printf("\"%s\" is lexicographically greater than \"%s\".\n", s1, s2);
    } else {
        printf("\"%s\" is lexicographically equal to \"%s\".\n", s1, s2);
    }

    return 0;
}
