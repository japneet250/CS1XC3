#include <stdio.h>
#include <stdbool.h>

int main (){
    int arr [] = {1,2,3,4,5,6};
    printf("%d\n",arr[10]);
    bool a = true;
    a++;
    printf("%i\n", a);
    if (arr[0]==1){
        printf("true");
    }
    else if (arr[0]==1){
        printf("false");
    }
    
    int z = 5/0;
    printf("%d\n",z);

    return 0;

}
