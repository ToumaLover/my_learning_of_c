#include <stdio.h>
#include <stdlib.h>
typedef struct date
{
    int y;
    int m;
    int d;
}D;

int main()
{
    D da;
    int day[12]={31,0,31,30,31,30,31,31,30,31,30,31};
    int i;
    int ddd=0;
    printf("请输入日期（年，月，日）");
    scanf("%d,%d,%d",&(da.y),&(da.m),&da.d);
    if((da.y%4==0&&da.y%100!=0)||da.y%400==0)
    {
        day[1]=29;
    }
    else
    {
        day[1]=28;
    }
    for(i=0;i<da.m-1;i++)
    {
        ddd += day[i] ;
    }
    ddd+=da.d;
    printf("\n%d月%d日是%d年的第%d天。",da.m,da.d,da.y,ddd);
    return 0;
}
