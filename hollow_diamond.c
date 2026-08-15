#include <stdio.h> 

int main(){
    for (int i=0; i<n; i++){
        //spaces
        for( int j= 0; j<n-i-1; j++){
            printf(" ");
        }
        printf("*");
        if(i != 0){
            //spaces
            for( int j= 0; j<2*i-1; j++){
                printf(" ");
            }
        }
    }
}
