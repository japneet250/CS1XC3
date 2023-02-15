#include <stdio.h>
int perfect(int num) {
    int i, sum;
    sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main () {
    int i;
    for (i=0; i<=1000;i++) {
        if (perfect(i)){
            printf("%d is a perfect number\n" ,i ); 
        }
    }
}
