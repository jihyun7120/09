#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 

int main(int argc, char *argv[])
{
    int i;
    int grade[SIZE];
    int average;
    int sum = 0;
    
    printf("학생의 점수를 입력하세요.\n");
    
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &grade[i]);
        sum = sum + grade[i];
        }
        
    average = sum / SIZE;
        
    for(i=0;i<SIZE;i++)
        printf("grade[%d]=%d\n", i, grade[i]); 
    
    
    
    
    
        
    printf("성적 평균: %d\n", average); 
    
    
  system("PAUSE");	
  return 0;
}
