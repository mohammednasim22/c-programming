#include <stdio.h>
int main(){
    int x=10 ;
    int y=20;
    {
        printf("x= %d, y=%d\n",x,y);
        {
            int y=40;
            x++;
            y++;
            printf("x = %d,y= %dn" , x, y);

            
        }
        return 0;
    }
}