#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int grade[5];
    int i;
    grade[0]= 10;
    grade[1]= 20;
    grade[2]= 30;
    grade[3]= 40;
    grade[4]= 50;
    
    for (i=0;i<5;i++)
        printf("grade%d is %d\n",i, grade[i]);
  
  system("PAUSE");	
  return 0;
}
