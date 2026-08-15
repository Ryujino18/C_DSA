#include <stdio.h>
/* 
int main(){
    
    int n = 4;
    for (int i = 1 ; i<=n;i++){
        char c = 'A';
        for (int j = 1;j<=n;j++){
            printf("%c ", c);
            c += 1;
        }
    printf("\n");
    }
}
output:
A B C D 
A B C D 
A B C D 
A B C D  */

int main(){
    int n = 4;
    char c = 'A';
    for (int  i = 1 ; i<=n; i++){
        for (int j = 1;j <=n;j++){
            printf("%c", c);
            c++;
        }
    printf("\n");
    }
}

// output:
// ABCD
// EFGH
// IJKL
// MNOP