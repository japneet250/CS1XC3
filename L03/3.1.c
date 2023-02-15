#include <stdio.h>
#include <math.h>

int perfect(int x) {
    int a;
    int b;
    int c;
    int d;
    a = 100 + x;
    b = a + 168;
    c = sqrt(a);
    d = sqrt(b);

    if ((int)c * (int)c == a) {
        if ((int)d * (int)d == b) {
            return 1;
        }
    }

    else {
        return 0;
    }
    return 0; 
}

int main() {
    int i;
    for (i = 0; i <= 20000; i++) {
        if (perfect(i)) {
            printf("%d is a perfect square number\n", i);
        }
    }
    return 0;
}