#include <stdio.h> 
// C001. 트로피 모양 찍기
int main(){
    int size;
    int stars, blanks1, blanks2;
    int i, j;

    scanf("%d", &size);
    blanks1 = 0; 
    blanks2 = size*2 - 2;
    for(i=0;i<size;i++){
        for(int i=0;i<blanks1;i++){
            printf(" ");
        }
        printf("*");
        for(int i=0;i<blanks2;i++){
            printf(" ");
        }
        printf("*\n");
        blanks1++;
        blanks2 = blanks2-2;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size*2;j++){
            printf("*");
        }
        printf("\n");
    }
    blanks1 = 0; 
    stars = size*2;
    for(int i=0;i<size;i++){
        for(int i=0;i<blanks1;i++){
            printf(" ");
        }
        for(int i=0;i<stars;i++){
            printf("*");
        }
        stars = stars-2;
        blanks1++; 
        printf("\n");
    }
    for(int i=0;i<size*2;i++){
        printf("*");
    }
    printf("\n");
    return 0;
}
