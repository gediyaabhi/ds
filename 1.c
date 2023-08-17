/* 
    AND => first digit 0 than no check condition 

    or => first digit 1 than no check condition
*/

#include<stdio.h>
int main ()
{
    int a = 1 , b = 2 ,c = 1 , d;

    d = (--a && --b) || (--c || ++a); // 0 2 0 0 

    // d = --a ||(--b && --c ); 
    printf("a: %d , b : %d c : %d , d : %d",a,b,c,d);

    // d = a && --b && c; // 1 1 1 1
    // printf(" \n a: %d , b : %d c : %d , d : %d",a,b,c,d); 
    
    // d = --a && --b && c; // 0 2 1 0
    // printf("\n a: %d , b : %d c : %d , d : %d",a,b,c,d); 

    // c = --a || --b; 
    // printf("\n a: %d , b : %d c : %d",a,b,c); 

    // c = a ||  --b; 
    // printf("\n a: %d , b : %d c : %d",a,b,c); 

    // c= --a || b;
    // printf("\n a: %d , b : %d c : %d",a,b,c); 
    
    // c = a || ++b; 
    // printf("\n a: %d , b : %d c : %d",a,b,c); 



    // c = ++a && --b;  
    // printf("\n a: %d , b : %d c : %d",a,b,c); 

    //  c = a  && ++b; // 1 3 1 
    //  printf("\n a: %d , b : %d c : %d",a,b,c); 

    //  c= --a &&  b;
    //  printf("\n a: %d , b : %d c : %d",a,b,c); 
    
    //  c = a &&  --b; 
    // printf("\n a: %d , b : %d c : %d",a,b,c); 



}