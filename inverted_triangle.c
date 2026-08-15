#include <stdio.h>

/* int main (){
    int n = 4;
    int num = 1;
    for (int i=0; i<n; i++){
        //spaces
        for (int j = 0; j<i ; j++){
            printf(" ");
        }
        //numbers
        for (int k = 0; k<n-i; k++){
            printf("%d" , i+1);
        }
        printf("\n");
    }
} */

// output:
//  1111
//   222
//    33
//     4

int main (){
    int n = 4;
    char c = 'A';
    for (int i=0; i<n; i++){
        //spaces
        for (int j = 0; j<i ; j++){
            printf(" ");
        }
        //numbers
        for (int k = 0; k<n-i; k++){
            printf("%c" , c+i);
        }
        printf("\n");
    }
}

// output:
// AAAA
//  BBB
//   CC
//    D