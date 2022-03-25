#include <stdio.h>

int main() {
    int i,n=100;
    for(i=1; i<=n; i++)
    {
        if(i%15==0)
        {
        printf("\nobdure infotech");
        continue;
        }
        else if(i%3==0)
        {
        printf("\nobdure");
        continue;
        }
        else if(i%5==0)
        {
        printf("\ninfotech");
        continue;
        }
    printf("\n%d",i);
    }
    return 0;
}