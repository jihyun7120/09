#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 

int main(int argc, char *argv[])
{
    int i;
    int grade[SIZE];
    int score[SIZE];
    
    for(i=0;i<SIZE;i++)
    {
        grade[i]=rand()%100;//0-99������  
        score[i]=grade[i];
}
        
    for(i=0;i<SIZE;i++)
        printf("grade[%d]=%d, score[%d]=%d\n", i, grade[i], i, score[i]);
    
  system("PAUSE");	
  return 0;
}
