#include <stdio.h>
#include "nnew.h"
int main()
{
 int i,j,result,output,ans;
  char name[50];
    printf("\n   ********       welcomr to lab    *********        \n");
    printf("\n enter the student name:");
    scanf("%s",&name[50]);
    printf("\n             list of  the experiments\n");
    printf("\n             1.AND gate\n ");
    printf ("\n            2.OR gate\n");
    printf("\n             3.NOT gate\n");
    printf("\n             4.NAND gate\n");
    printf("\n             5.NOR gate\n");
 int x1=1;
    if(x1==1) {  
        printf("\n    first experiment of the lab\n          \n AND GATE \n");
 printf("\nA   B  |  output\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   result = and_and(i,j);

   printf("%d   %d  |  ",i,j);
   printf(" %d\n",result);
   
  }
 }}
 int x2;
    printf("\n please take input as '1' to do second experiment  :   \n");
    scanf("%d",&x2);
    if(x2==1&&x1==1){
        printf("\n    second experiment of the lab\n          \n OR GATE \n");
   printf("\nA   B  |  output\n");
    for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   ans = or_ro(i,j);

   printf("%d   %d  |  ",i,j);
   printf(" %d\n",ans);
  
  }
 }}
 int x3;
      printf("\nplease take input as '1' to do third experiment  :   \n");
      scanf("%d",&x3);
      if(x3==1&&x2==1){
          printf("\n    Third  experiment of the lab\n          \n NOT GATE \n");
   printf("\nA |  output\n");
  for(j=0;j<=1;j++)
  {
    output = nt(j);

   printf("%d | ",j);
   printf(" %d\n",output);
  }
  } 
  int x4;
    printf("please take input as '1' to do fourth  experiment  :   \n");
    scanf("%d",&x4);
    if(x4==1 && x3==1){
        printf("\n    Fourth experiment of the lab\n          \n NAND GATE \n");
  printf("\nA   B  |  output\n");
 for(i=0;i<2;i++)
   {
  for(j=0;j<2;j++)
    {
   result = nand(i,j);

   printf("%d   %d  |  ",i,j);
   printf(" %d\n",result);
    }
    }}
    int x5;
     printf("\nplease take input as '1' to do fifth experiment  :  \n ");
     scanf("%d",&x5);
     if (x4==1&& x5==1){
         printf("\n   Fifth experiment of the lab\n          \n NOR GATE \n");
    
    printf("\nA   B  |  output\n");
    for(i=0;i<2;i++)
     {
       for(j=0;j<2;j++)
        {
          result = nor(i,j);

        printf("%d   %d  |  ",i,j);
         printf(" %d\n",result);
   
         }
     }}
     printf("\nEND OF THE LAB\n");
     printf("\n ******* THANK YOU *********\n");

}