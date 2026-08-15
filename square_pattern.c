#include <stdio.h> 

/* int main (){
    int n = 4;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n;j++){
            printf("%d",j );
        }
    printf("\n");
    }
    return 0;
}
output: 
1234
1234
1234
1234    
     */

int main(){
    int n = 3;
    int num = 1;
    for (int i = 1; i<=n;i++){
        for (int j = 1; j<=n;j++){
            printf("%d", num);
            num++;
        }
    printf("\n");
    }
}

// output:
// 123
// 456
// 789