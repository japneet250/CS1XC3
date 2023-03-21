#include <stdio.h>
#include <stdbool.h>

int main (){
    int arr [] = {1,2,3,4,5,6};
    printf("%d\n",arr[10]);
    bool a = true;
    bool b = a+1;
    printf("%i\n", b);
    if (a==true){
        printf("true");
    }
    else if (a==true){
        printf("false");
    }
    
    int z = 5/0;
    printf("%d\n",z);

    return 0;

}
