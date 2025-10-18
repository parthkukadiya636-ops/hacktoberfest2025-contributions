# include<stdio.h>
#include<math.h>
float modu_(float  x , float y);
int main() {
    int choices;
    printf("welcome to the world of calculations !!:\n");
    printf("please choose one of the choices fron the given below: \n");
    
    printf("1.addition. \n");
     printf("2.substraction. \n");
      printf("3.multiplication. \n");
       printf("4.division. \n");
        printf("5.modulo. \n");
         printf("6.power. \n");
         printf("please enter your choice:");
         scanf("%d", &choices);
   
         float x , y;
         printf("please enter first number:");
         scanf("%f", &x); 
         printf("please enter second number: ");
         scanf("%f", &y);
         
         switch(choices){
         case 1: printf("addition is :%f \n", x+y);
         break;   
         
         case 2: printf("substraction  is :%f \n ", x-y);
         break;   
                
         case 3: printf("multiplication is :%f \n", x*y);
         break;   
                
         case 4: printf("division is :%f \n", x/y);
         break;
         
         case 5: modu_(x,y); 
         break;
  
         case 6: printf("power is :%f \n", pow(x,y));
         break;   
         }
        
        
         printf("thanks for calculating on our calculator !!\n");
         printf("Developed by: Parth");
    return 0;
}


float modu_(float x, float y){
          int n = y/x;
          float r = y - x*n;
          printf("%f", r);
          return r;
          
}

