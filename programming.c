// number E7 answer
// #include <stdio.h>

// int main() {
//     int n, i;
//     scanf("%d", &n);
//     printf("The factors of %d are: ", n);
//     for (i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

//  number E8 answer

// #include <stdio.h>

// int main() {
//     int n, sum = 0, digit;

//     scanf("%d", &n);
//     while (n > 0) {
//         digit = n % 10;
//         sum += digit;
//         n /= 10;
//     }
//     printf("Sum = %d\n", sum);

//     return 0;
// }


// number M4 answer

// #include <stdio.h>

// int main() {
//     char str[10000];
//     int isBinary = 1, i = 0;
//     scanf("%s", str);


//     while (str[i] != '\0') {
//         if (str[i] != '0' && str[i] != '1') {
//             isBinary = 0;
//             break;
//         }
//         i++;
//     }
//     if (isBinary) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
//     return 0;
// }

// // number H4 answer


// #include <stdio.h>

// int main() {
//     int n, m, s;
//     scanf("%d %d", &n, &m);

//     scanf("%d", &s);

//     int array[n][m];
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &array[i][j]);
//         }
//     }

//     int count = 0;

//     for (int j = 0; j < m; j++) {
//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += array[i][j];
//         }
//         if (sum == s) {
//             count++;
//         }
//     }

    
//     printf("%d\n", count);

//     return 0;
// }





