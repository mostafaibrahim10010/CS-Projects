#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1;
    int s2;
    int s3;

    printf("Enter the First Side Length: ");
    scanf("%d", &s1);

    printf("Enter the Second Side Length: ");
    scanf("%d", &s2);

    printf("Enter the Third Side Length: ");
    scanf("%d", &s3);

    if ( (s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)){
        printf("The values of %d, %d, and %d can be sides of a triangle." , s1, s2, s3);
    }
    else {
        printf("The values of %d, %d, and %d can't be sides of a triangle." , s1, s2, s3);
    }

    return 0;
}
