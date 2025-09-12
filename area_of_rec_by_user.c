#include<stdio.h>
#include<math.h>    /* writting this so that to include things like pi or doing the mathematical operations*/


int main()
{
    int a , b , c ;

    printf("the value of length is :  ");
    scanf("%d", &a);
    
    printf("the value of breadth is : ");
    scanf("%d", &b);
    

    c = a * b ;
    printf("the value of area of the recatngle with ur given values of a and b is %d \n \n ", c);





/*NOW THE AREA OF THE CIRCLE*/


    # define PI 3.142 /*have to declare the special things too */
   int r ;
   float area  ;
   printf("the value of the radius :  ");
   scanf("%d" , &r);
   area = PI * pow(r,2);

   printf ("Area of the circle is : %f\n " , area);
   

return 0 ;




}
