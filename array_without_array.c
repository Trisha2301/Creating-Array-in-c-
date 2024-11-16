#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    int *p = NULL;
    printf("Enter the number u want to use \n");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    if (p == NULL)
    {
        printf("The storage allocation not given properly");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the integers :");
        scanf("%d", p + i);
    }
    for (int i = 0; i < n; i++)
        printf("The integers are : %d", *(p + i));
}
