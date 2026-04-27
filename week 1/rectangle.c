#include<stdio.h>

int main(void)
 {
    int length;
    int width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    int area = width*length;
    int perimenter = (width+length)*2;
    printf("\nThe area of the rectangle is: %d\nThe perimenter of the rectangle is %d.\n",area,perimenter);

 }
