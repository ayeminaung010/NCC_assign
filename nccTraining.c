#include "stdio.h"
#include "string.h"

   char totalArray [100];

   int program = 0;
   int data[100],i,*ptr,*ptr1,*ptr2;
   void reference(int *a , int *b);

int main(){
   int index = 0;
   int a = 0;
   int c= 0;
   int position =0;
   int insertData = 0;
   char myName[20] = {'A','y','e',' ','M','i','n',' ','A','u','n','g'};

   for (int i = 0; myName[i] != '\0' ; i++)
   {
      totalArray[i] = myName[i];
      index = index +1;
   }
   printf("My name is : %s\n",totalArray);

   printf("Press 1 to store your data :");


   scanf("%d",&program);

   while (program == 1)
   {
      index= 0;
      printf("How many data do you want to store :");

      scanf("%d",&a);
      index = index +1 ;

     for (int i = 0; i < a; i++)
     {
      printf("Enter your %d data :",index);
      scanf("%d",&data[i]);
      index = index +1 ;
     }

     for ( i = 0; i < a; i++)
     {
      printf("\nyour data are : %d\n",data[i]);
     }

     printf("to exit the program,Press 2 :");
     printf("\nDo you want to exchange your data? Press 3 :");
     printf("\n_______________________________________\n");
     printf("\nDo you want to see dataAddress Press 4 :");
     printf("\n_______________________________________\n");
     printf("\nChange your dataa and position? Press 5 :");

     scanf("%d",&program);

     while(program == 3){
      printf("Enter position you want to change value :");
      scanf("%d",&position);

      position = position -1;
      printf("Enter your data :");
      scanf("%d",&c);
      data[position] = c;

     for ( i = 0; i < a; i++){
       printf("Your data ... %d\n",data[i]);
     }
      printf("\nto exit the program,Press 2 :");
      scanf("%d",&program);
     }

      while (program == 4)
      {
         printf("enter position you need to see memory address ..:");
         scanf("%d",&position);

         position = position -1;
         printf("position is : %d\n",position);
         ptr =&data[position];
        printf("\nyour data address : %d",ptr);
        printf("\nyour data value is : %d",*ptr);

         printf("\nto exit the program,Press 2 :");
         scanf("%d",&program);
      }

      while (program == 5)
      {
         
         printf("You can exchange postion and value HERE .. :");
         printf("\nEnter first position do you want to change :");
         scanf("%d",&position);
         position = position -1 ;
         
         if (position < a)
         {
            ptr1 = &data[position];
         }else{
            printf("Your position do not have .try again!");
            
         }
 
         
         printf("\nEnter second position do you want to change :");
         scanf("%d",&position);
         position = position -1 ;


          
            if (position < a)
            {
            ptr2 = &data[position];
            }else{
               printf("Your position do not have .try again!");
            }
         
          

         reference(ptr1 , ptr2);

         for ( i = 0; i < a; i++)
         {
            printf("After changing your data  : %d\n",data[i]);

            
         }
         printf("\nto exit the program,Press 2 :");
            scanf("%d",&program);
      }

   }

   return 0;
}

void reference(int *a , int *b){
   int change = *a;
    *a = *b;
    *b = change;
}

