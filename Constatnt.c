#include <stdio.h>
#define PI 3.14f
int main(){
    const float PI=3.14f;
    PI=3.14;
    
    printf("%.2f",PI);
    return 0;
}