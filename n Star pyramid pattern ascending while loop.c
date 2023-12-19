#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1;
    int j=1;
    int r;
    printf("Enter the number of Rows: ");
    scanf("%d",&r);
    while(i<=r) {
        while(j<=i) {
        j++;
        printf("* ");
        }
        printf("\n");
        i++;
        j=1;
    }
    return 0;
}
