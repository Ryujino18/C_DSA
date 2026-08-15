#include <stdio.h>
/* 
int main(){
    int n = 4;
    for (int i = 0 ; i<n; i++){
        for (int j = 0;j<i+1; j++){
            printf("*");
        }
    printf("\n");
    }
}
output:
*
**
***
****
 */

/* int main (){
    int n = 4; 
    
    for (int i = 1; i<n+1 ; i++){
        for (int j = 1; j<i+1;j++){
            printf("%d ",i);
            
        }
        printf("\n");
    }
}

output:
1 
2 2 
3 3 3 
4 4 4 4  */

/* int main (){
    int n = 4;
    char c = 'A';
    for (int i = 0; i<n; i++){
        for (int j = 0; j<i+1 ; j++){
            printf("%c", c+i);
        }
        printf("\n");

    }
} */
// output:
// A
// BB
// CCC
// DDDD
int main (){
    int n = 4;
    int num = 1;
    for (int i = 0; i<n; i++){
        for (int j = 1; j<=i+1 ; j++){
            printf("%d", num * j);
        }
        printf("\n");

    }
}
// output:
// 1
// 12
// 123
// 1234
