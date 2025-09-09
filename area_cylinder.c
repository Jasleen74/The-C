#include<stdio.h>
#include<math.h>
#define PI 3.142

int main() {
     int r ;
    printf ("the value of the radius of the cylinder is : ");
    scanf ("%d", &r);

    int h ;
    printf ("the value of the height of the cylinder is : ");
    scanf ("%d", &h );


    float area ; 
    area = 2* PI *r *h ;
    printf ("the value for the area of the cylinder is %f " ,area);

  
 return 0;
}
