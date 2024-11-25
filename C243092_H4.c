// number H4 answer


#include <stdio.h>

int main() {
    int n, m, s;
    scanf("%d %d", &n, &m);

    scanf("%d", &s);

    int array[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int count = 0;

    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += array[i][j];
        }
        if (sum == s) {
            count++;
        }
    }

    
    printf("%d\n", count);

    return 0;
}