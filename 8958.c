#include <stdio.h>
#include <string.h>
#define MAX 80
int main()
{
    char quiz[MAX];
    int num;
    for (int q=0;q<MAX;q++){
        quiz[q]='X';
    }
    
    scanf("%d", &num);
    if(num>0&&num<80){
        for(int i=0;i<num;i++){
            int cnt=0;
            int sum=0;
            scanf("%s",quiz);
        
            for (int j=0;j<strlen(quiz);j++){
                if (quiz[j]=='O'){
                    cnt+=1;
                } else{
                    cnt = 0;
                }
                sum += cnt;
            }
            printf("%d\n", sum);
        }    
    } else{
        printf("error");
    }
    
    return 0;
}