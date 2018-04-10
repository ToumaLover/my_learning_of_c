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
    int i,y;
    int ddd=0;
    printf("Enter year/month/day:");
    scanf("%d%d%d",&da.y,&da.m,&da.d);
    for(y=1990;y<da.y;y++)
    {
        if((y%4==0&&y%100!=0)||y%400==0)
        {
            day[1]=29;
        }
        else
        {
            day[1]=28;
        }
        for(i=0;i<12;i++)
        {
            ddd+=day[i];
        }
    }
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
    ddd--;
    if(ddd%5<3) printf("He is fishing.\n");
    else printf("He is sleeping.\n");
    return 0;
}
