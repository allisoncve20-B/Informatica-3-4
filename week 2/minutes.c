#include <stdio.h>

int main(void)
{
    int total_minutes;
    printf("Moving running time:");
    scanf("%d", &total_minutes);
    int hours = total_minutes / 60;
    int minutes = total_minutes % 60;
    printf("Equals:%d h %d min\n",hours,minutes);
    int start_h ,start_m;
    printf("Enter start hour:");
    scanf("%d",&start_h);
    scanf("%d",&start_m);
    int end_h = start_h+ hours;
    int end_m = start_m + minutes;
    printf("Finish time: %d:%d\n",end_h,end_m );




}
