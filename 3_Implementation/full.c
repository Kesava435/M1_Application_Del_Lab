#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[50];
    printf("\n welcomr to lab");
    printf("\n enter the student name:");
    scanf("%s",&name[50]);
    printf("\n list of experiments\n");
    printf("\n 1.AND gate ");
    printf ("\n 2.OR gate");
    printf("\n 3.NOT gate");
    printf("\n 4.NAND gate");
    printf("\n 5.NOR gate");
    int x1=1;
    if(x1==1)
       {
        
          int a[5],b[5];
          int i, m,n,product;
           printf("\n first experiment of the lab\n \n            AND GATE");
           for(m=0;m<5;m++)
             {  
                printf("\n enter the '0' or '1' of a:\n");
 
                scanf("%d",&a[m]);
             }
           for(n=0;n<5;n++)
             {
                printf("\n enter the '0' or'1' of b:\n");

                scanf("%d",&b[n]);
             } 
   
                   for (i = 0; i < 5; i++)
                 {   
  
                   int c=a[i],d=b[i];
                product = fun_product(c,d);
  
                    printf("\n %d AND %d = %d \n",
                    a[i], b[i], product);
                  }
       }
    int x2;
    printf("\n please take input as '1' to do second experiment  :   \n");
    scanf("%d",&x2);
    if(x2==1&&x1==1)
       {
       
           int a[5] , b[5];
            int i, or_ans,m,n;
            printf("\n second experiment of the lab    \n \n        OR GATE \n");
            for(m=0;m<5;m++)
             {
               printf("\n enter the '0'or '1' of a:\n");

              scanf("%d",&a[m]);
             }
            for(n=0;n<5;n++)
             {
                printf("\n enter the '0' or'1' of b:\n");

                 scanf("%d",&b[n]);
             }
  
                  for(i = 0; i < 5; i++)
                   {
  
        // using the || operator
                         or_ans = a[i] || b[i];
  
                         printf("\n %d OR %d = %d\n", a[i], b[i], or_ans);
                   }
        }
        
      int x3;
      printf("\nplease take input as '1' to do third experiment  :   \n");
      scanf("%d",&x3);
      if(x3==1&&x2==1)
      {
        int i,ans,n,a[5];
        printf("\n third experiment of the lab \n \n           NOT GATE ");
    
         for(n=0;n<5;n++)
          {
            printf("\n enter the input:\n");

            scanf("%d",&a[n]);
          }
    
            for(i=0;i<5;i++)
            {
                ans =!(a[i]);
                printf("\n  NOT %d = %d\n", a[i], ans);
            }
       }
       
    int x4;
    printf("please take input as '1' to do fourth  experiment  :   \n");
    scanf("%d",&x4);
    if(x4==1 && x3==1)
     {
       int a[5] ,b[5];
       int i, ans,m,n;
       printf("fourth experiment of the lab\n \n             NAND GATE\n");
      for(m=0;m<5;m++)
      { 
          printf("\n enter the '0'or '1' of a:\n");

         scanf("%d",&a[m]);
      }
      for(n=0;n<5;n++)
      { 
          printf("\n enter the '0' or'1' of b:\n");

         scanf("%d",&b[n]);
      }
  
          for (i = 0; i < 5; i++)
           {
              ans = !(a[i] & b[i]);
               printf("\n %d NAND %d = %d\n",
               a[i], b[i], ans);
           }
      }
      
     int x5;
     printf("\nplease take input as '1' to do fifth experiment  :  \n ");
     scanf("%d",&x5);
     if (x4==1&& x5==1)
     {
       int a[5] ,b[5];
       int i, ans,m,n;
        printf(" fifth experiment of the lab\n\n          NOR GATE \n");
        for(m=0;m<5;m++)
       { 
        printf("\n enter the '0'or '1' of a:\n");

        scanf("%d",&a[m]);
       }
        for(n=0;n<5;n++)
      { 
         printf("\n enter the '0' or'1' of b:\n");

        scanf("%d",&b[n]);
      }
  
         for (i = 0; i < 5; i++)
          {
             ans = !(a[i] || b[i]);
              printf("\n %d NOR %d = %d \n",
               a[i], b[i], ans);
          }
     }
     printf("\nEND OF THE LAB\n");
     printf("\n ******* THANK YOU *********\n");
}