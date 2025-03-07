#include <stdio.h>
// C002. 생활관 점호 프로그램
int main(){
    int person[4][3] ={0};   //4개 층별 3개 호실의 점호 인원 수
    int sum[3] = {0};         //점호 인원 수 합계 (남, 여, 전체)
    float ratio[3] = {0};      // 점호 인원 수 비율 (남, 여, 전체)
    int total_m = 0;
    int total_w = 0;
    printf("Check room (Men)\n"); 
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            int temp;
            printf("Room #%d0%d > ", i+1, j+1);
            scanf("%d", &temp);
            sum[0]+= temp;
            person[i][j] = temp;
            total_m += temp;
            printf("\n");
        }
    }
    ratio[0] = (total_m*1.0 / 24.0) * 100;
    printf("Check room (Women)\n");
    for(int i=2;i<4;i++){
        for(int j=0;j<3;j++){
            int temp;
            printf("Room #%d0%d > ", i+1, j+1);
            scanf("%d", &temp);
            sum[1]+= temp;
            person[i][j] = temp;
            total_w += temp;
            printf("\n");
        }
    }
    sum[2] = total_m + total_w;
    ratio[1] = (total_w*1.0 / 24.0)* 100;
    ratio[2] = ((total_m + total_w)*1.0 / 48.0) * 100;

    printf("Check Result\n");
    printf("Men: %d/24 (%.1f%%)\n", sum[0], ratio[0]);
    printf("Women: %d/24 (%.1f%%)\n", sum[1], ratio[1]);
    printf("Total: %d/48 (%.1f%%)\n", sum[2], ratio[2]);
    
    return 0;
}
