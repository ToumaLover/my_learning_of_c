#include <stdio.h>
#include <stdlib.h>

void sort1(int num[],int n);
void sort2(int num[],int n);
void sort3(int num[],int n);
void uback(int num[],int);
void swap(int num[],int,int);
int find1(int num[],int,int);
int find2(int num[],int,int);

int main()
{
    int i;
    int num[20]={12,30,25,17,13,40,22,67,91,34,77,68,32,73,88,05,92,55,06,98};
    sort1(num,20);
    //uback(num,20);
    for(i=0;i<20;i++)
    {
        printf("%d %d\n",i,num[i]);
    }
    printf("\n");
    scanf("%d",&i);
    printf("%d",find2(num,20,i));
    return 0;
}


//�۰����
//��������Ϊ����
//�����±�
int find2(int num[],int n,int key)
{
    int a=0;
    int b=n;
    int c;

    if(num[n-1]>key)
    {
        return -1;
    }
    do
    {
        c=(a+b)/2;
        if(num[c]==key)
        {
            return c;
        }
        else if(num[c]>key)
        {
            a = c+1;
        }
        else
        {
            b = c-1;
        }
    }while(a<=b);
    return -1;
}

//���Բ���
//��еĲ��ң���Ϊ���ֶ���һά������Ҳ�û��ʲô��,���ز鵽���±꣬���򷵻�-1
//�������õ�,��һ�����������涫���Ļ����±������Ϊ�������ݼ�ļ�ֵ
int find1(int num[],int n,int key)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(key==num[i])
        {
            return i;
        }
    }
    return -1;
}

//ѡ������ ����
//��������ͳ���
void sort1(int num[],int n)
{
    int i,j;
    int t;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            t=i;;
            if(num[j]<num[t])
            {
                t=j;
            }
            //s=num[t];
            //num[t]=num[j];
            //num[j]=s;
            swap(num,t,j);
        }
    }
    return;
}

//ð�ݷ����� ����
//��������ͳ���
void sort2(int num[],int n)
{
    int i;
    char flag=1;
    while(flag!=0)
    {
        flag=0;
        for(i=0;i<n-1;i++)
        {
            if(num[i]<num[i+1])
            {
                swap(num,i,i+1);
                flag=1;
            }
        }
    }
    return;
}

//����������ݵߵ�
//��������ͳ���
void uback(int num[],int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        //t = num[i];
        //num[i] = num[n-i-1];
        //num[n-1-i] = t;
        swap(num,i,n-1-i);
    }
    return;
}

//������ĳ�����
//����������������ĽǱ�
void swap(int num[],int a,int b)
{
    int t;
    t = num[a];
    num[a] = num[b];
    num[b] = t;
    return;
}
