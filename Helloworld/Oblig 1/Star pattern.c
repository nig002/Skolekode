#include<stdio.h>
void myTriangles(int numlines){
    for(int i=1;i<=numlines;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        } 
    printf("\n");   
    }

}
int main() {
    printf("How many rows? \n");
    int numlines;
    scanf("%i",&numlines);
    myTriangles(numlines);

    return 0;
    
}