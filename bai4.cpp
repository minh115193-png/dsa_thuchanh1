#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    int x = a;
    int y = b;

    while(a * b != 0){
        if(a > b)
            a %= b;
        else
            b %= a;
    }

    int BC = (x + y) * (a + b);

    printf("%d", BC);

    return 0;
}
