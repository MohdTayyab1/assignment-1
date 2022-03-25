// wap to print smallest and largest no in list for enter user input...

#include<stdio.h>
int main()
{
    int i, n, lar,sm, elem;
    printf ("Enter total number of elements : ");
    scanf ("%d", &elem);
    printf ("\nEnter first number : ");
    scanf ("%d", &n);
    lar = n;
    sm=n;
    for (i=1; i<= elem -1 ; i++)
    {
        printf ("\nEnter another number : ");
        scanf ("%d",&n);
        if (n>lar)
        lar=n;
        if (n<sm)
        sm=n;
    }
    printf ("\nThe largest number is : %d", lar);
    printf ("\nThe smallest number is : %d", sm);
    return 0;
}