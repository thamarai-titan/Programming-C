// printing numbers from front without reversing the number
#include<stdio.h>
void printnum(int number){
    if (number == 0)
    {
        return;
    }
    printnum(number/10);

    printf("%d ", number%10);
}
int main(){
    int number;
    scanf("%d", &number);

    printnum(number);
    return 0;
}