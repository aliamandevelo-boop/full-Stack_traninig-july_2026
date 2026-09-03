#include<stdio.h>



    
int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d this  is Even Number", num);
    } else {
        printf("%d this  is Odd Number", num);
    }

    return 0;

}
