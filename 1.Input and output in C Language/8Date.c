#include<stdio.h>
int main() {
int d,m,y;
printf("Enter the date in dd/mm/yyyy format:\n");
scanf("%d/%d/%d",&d,&m,&y);
printf("Day - %d , Month - %d, Year - %d",d,m,y);
return 0;
}