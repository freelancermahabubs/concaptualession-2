#include<stdio.h>
int main(){
    for (int i = 1; i <=100; i++)
    {
       if(i % 2 ==0){
        printf("%d-Jor\n",i);
       }
       else{
        printf("%d-Bejor\n",i);
       }
       
    }
    return 0;
}