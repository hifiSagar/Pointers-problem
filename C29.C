
/*to find the adress of values program*/


#include<stdio.h>
int main(){
int var = 10;
int*ptr = & var;
printf("%p \n", ptr);
printf("%p \n", *ptr);                /*Garbage value or location in ram*/
printf("%p \n", &ptr);
printf("%x \n", &ptr);
 return 0;

}
    
