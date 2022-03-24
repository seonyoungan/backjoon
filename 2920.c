#include <stdio.h>
#define MAX_SIZE 8

int main() {
    int as=0;//ascending
    int des=0;//descending
    int mix=0;//mixed
    int num[MAX_SIZE];//0~8번째원소까지
    for(int i=0;i<MAX_SIZE;i++){ //0~8까지 입력가능해야함
        scanf("%d", &num[i]);
        if(i+1==num[i]){ 
            as++;
        } else if(MAX_SIZE-i==num[i]){
            des++;
        } else{
            mix++;
        }
    }
    
    //print
    if(as==MAX_SIZE){
        printf("ascending");
    } else if(des==MAX_SIZE){
        printf("descending");
    } else{
        printf("mixed");
    }
    
    return 0;
}