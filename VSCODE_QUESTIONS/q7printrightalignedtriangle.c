#include<stdio.h>
void printpattern(int row){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        for(int k=5;k>=i;k--){
            printf(" %c",'*');
        }
        printf("\n");
    }
}
int main(){
    printpattern(4);
    return 0;
}