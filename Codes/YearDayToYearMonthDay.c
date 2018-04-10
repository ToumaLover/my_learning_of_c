#include <stdio.h>

void  MonthDay(int year, int yearDay, int *pMonth, int *pDay);

int main()
{
    int y,yd,m,md;
    printf("Please enter year, yearDay:");
    scanf("%d,%d",&y,&yd);
    MonthDay(y,yd,&m,&md);
    printf("month = %d, day = %d\n",m,md);
    return 0;
}

void  MonthDay(int year, int yearDay, int *pMonth, int *pDay)
{
    int m=1;
    if((year%400==0)||((year%4==0)&&(year%100!=0)))
    {
        if(yearDay>31)
        {
           m++;
           yearDay-=31;
           if(yearDay>29)
           {
               m++;
               yearDay-=29;
               if(yearDay>31)
               {
                   m++;
                   yearDay-=31;
                   if(yearDay>30)
                   {
                       m++;
                       yearDay-=30;
                       if(yearDay>31)
                       {
                           m++;
                           yearDay-=31;
                           if(yearDay>30)
                           {
                               m++;
                               yearDay-=30;
                               if(yearDay>31)
                               {
                                   m++;
                                   yearDay-=31;
                                   if(yearDay>31)
                                   {
                                       m++;
                                       yearDay-=31;
                                       if(yearDay>30)
                                       {
                                           m++;
                                           yearDay-=30;
                                           if(yearDay>31)
                                           {
                                               m++;
                                               yearDay-=31;
                                               if(yearDay>30)
                                               {
                                                   m++;
                                                   yearDay-=30;
                                               }
                                           }
                                       }
                                   }
                               }
                           }
                       }
                   }
               }
           }
        }
    }
    else
    {
        if(yearDay>31)
        {
           m++;
           yearDay-=31;
           if(yearDay>28)
           {
               m++;
               yearDay-=28;
               if(yearDay>31)
               {
                   m++;
                   yearDay-=31;
                   if(yearDay>30)
                   {
                       m++;
                       yearDay-=30;
                       if(yearDay>31)
                       {
                           m++;
                           yearDay-=31;
                           if(yearDay>30)
                           {
                               m++;
                               yearDay-=30;
                               if(yearDay>31)
                               {
                                   m++;
                                   yearDay-=31;
                                   if(yearDay>31)
                                   {
                                       m++;
                                       yearDay-=31;
                                       if(yearDay>30)
                                       {
                                           m++;
                                           yearDay-=30;
                                           if(yearDay>31)
                                           {
                                               m++;
                                               yearDay-=31;
                                               if(yearDay>30)
                                               {
                                                   m++;
                                                   yearDay-=30;
                                               }
                                           }
                                       }
                                   }
                               }
                           }
                       }
                   }
               }
           }
        }
    }
    *pMonth = m;
    *pDay = yearDay;
    return;
}
