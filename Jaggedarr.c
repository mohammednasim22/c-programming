#include <stdio.h>
int main()
{
    //int a[]={1,2,3,4,5};
    //print("%d ", sizeof(a));
    //return 0;

    int a[]={1,2,3,4,5};
    int b[]={6,7};

    int *jag[]={a,b};
    int size[]={5,2};
    int j=0;
    for(int i=0;i<2;i++)
    {
        int *p=jag[i];
        for(int j=0;j< size[i]; j++)
        {
            printf("%d",*(p));
            p++;
        }
        printf("\n");
    }
}