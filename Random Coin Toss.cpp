#include<stdio.h>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main(){
    int i;
    printf("How many output you want\n");
    scanf("%d",&i);
    for(int j=0;j<i;j++)
    {
        int k = (rand() * rand() *2 /3 +5) %2 ;
        if(k==0)
        {
            printf("Head\n");
        }
        else {
            printf("Tails\n");
        }
    }

return 0;
}
