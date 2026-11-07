 #include<stdio.h>
void printpattern(int row){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf(" %d",j);
        }
        printf("\n");
    }
}
int main(){
    printpattern(4);  
    return 0;
}