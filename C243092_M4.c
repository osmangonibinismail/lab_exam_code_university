// number M4 answer

#include <stdio.h>

int main() {
    char str[100000];
    int isBinary = 1, i = 0;
    scanf("%s", str);


    while (str[i] != '\0') {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
        i++;
    }
    if (isBinary) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}