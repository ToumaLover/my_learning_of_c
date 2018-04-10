#include <stdio.h>
#include <stdlib.h>

void part1();
void part2();
void part3();
void part4();
void part5();
void part6();
void part7();
void menu();

float sc[30];
long num[30];
int n;

int main()
{
    printf("Input student number(n<30):\n");
    scanf("%d",&n);
    while(1)
    {
        menu();
    }
    return 0;
}

void part1()
{
    int i;

    printf("Input student's ID, name and score:\n");
    for(i=0;i<n;i++)
    {
        scanf("%ld%f",num+i,sc+i);
    }
    return;
}

void part2()
{
    int i;
    float s=0;

    for(i=0;i<n;i++)
    {
        s+=sc[i];
    }
    printf("sum=%.0f,aver=%.2f\n",s,s/n);
    return;
}

void part3()
{
    int i,j,t;
    int s[30];

    for(i=0;i<n;i++)
    {
        s[i] = i;
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(sc[s[i]]<sc[s[i+1]])
            {
                t = s[i];
                s[i] = s[i+1];
                s[i+1] = t;
            }
        }
    }
    printf("Sort in descending order by score:\n");
    for(i=0;i<n;i++)
    {
        printf("%ld\t%.0f\n",num[s[i]],sc[s[i]]);
    }
    return;
}

void part4()
{
    int i,j;
    long t;
    int s[30];

    for(i=0;i<n;i++)
    {
        s[i] = i;
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(num[s[i]]>num[s[i+1]])
            {
                t = s[i];
                s[i] = s[i+1];
                s[i+1] = t;
            }
        }
    }
    printf("Sort in ascending order by number:\n");
    for(i=0;i<n;i++)
    {
        printf("%ld\t%.0f\n",num[s[i]],sc[s[i]]);
    }
    return;
}

void part5()
{
    long nn;
    int i;

    printf("Input the number you want to search:\n");
    scanf("%ld",&nn);
    for(i=0;i<n;i++)
    {
        if(nn==num[i])
        {
            break;
        }
    }
    if(i==n)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("%ld\t%.0f\n",num[i],sc[i]);
    }
    return;
}

void part6()
{
    int a[6];
    int i;
    float s;

    for(i=0;i<6;i++)
    {
        a[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        s = sc[i];
        if(s<60)
        {
            a[0]++;
        }
        else if(s<69.5)
        {
            a[1]++;
        }
        else if(s<79.5)
        {
            a[2]++;
        }
        else if(s<89.5)
        {
            a[3]++;
        }
        else if(s<99.5)
        {
            a[4]++;
        }
        else
        {
            a[5]++;
        }
    }
    printf("<60\t%d\t%.2f%%\n",a[0],a[0]*100.0/n);
    for(i=1;i<5;i++)
    {
        printf("%d-%d\t%d\t%.2f%%\n",i*10+50,i*10+59,a[i],a[i]*100.0/n);
    }
    printf("%d\t%d\t%.2f%%\n",100,a[5],a[5]*100.0/n);
    return;
}

void part7()
{
    int i,j;
    long t;
    int s[30];

    for(i=0;i<n;i++)
    {
        s[i] = i;
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(num[s[i]]>num[s[i+1]])
            {
                t = s[i];
                s[i] = s[i+1];
                s[i+1] = t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%ld\t%.0f\n",num[s[i]],sc[s[i]]);
    }
    return;
}

void menu()
{
    int i;
    printf("Management for Students' scores\n1.Input record\n2.Caculate total and average score of course\n3.Sort in descending order by score\n4.Sort in ascending order by number\n5.Search by number\n6.Statistic analysis\n7.List record\n0.Exit\nPlease Input your choice:\n");
    scanf("%d",&i);
    switch(i)
    {
        case 0:printf("End of program!");exit(0);break;
        case 1:part1();break;
        case 2:part2();break;
        case 3:part3();break;
        case 4:part4();break;
        case 5:part5();break;
        case 6:part6();break;
        case 7:part7();break;
        default:
        {
            printf("Input error!\n");
            return;
        }
    }
    return;
}
