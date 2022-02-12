#include<stdio.h>
int main(void)
{
  float marks[10]={75.00,45.00,61.00,91.00,55.00,43.00,78.00,56.00,95.00,12.00};
float tot=0,avg=0;
int pass=0,fail=0;
int i;
for(i=0;i<10;i++){
  tot=tot+marks[i];
}
avg=tot/10;
for(i=0;i<10;i++){
  if(avg<marks[i]){
    pass++;
  }
  else if(avg>marks[i]){
    fail++;
  }
}
printf("THE NUMBER OF PASS STUDENTS %d\n ",pass);
printf("THE NUMBER OF FAIL STUDENTS %d  ",fail);

  return 0;
}