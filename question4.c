#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int i,j,k=1,needle,upper=60,lower = 10;
    int array[4][5];
    

 srand(time(NULL));
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            array[i][j] = (rand() % (upper - lower + 1)) + lower;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    
     printf("Enter the needle: ");
    scanf("%d",&needle);
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(array[i][j]<needle){
                array[i][j] = 100;
            }
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}