#include<stdio.h>
#include<string.h>

void Input(char *p[], int n);
void Sort(char *p[], int n);
void Print(char *p[], int n);

int main()
{
    char str[20][40];
    int i, n;
    char *pstr[40];
    printf("Input n(n<=20):\n");
    scanf("%d", &n);
    getchar();

    for(i=0;i<n;i++)
    {
        pstr[i]=str[i];
    }
    Input(pstr, n);
    Sort(pstr, n);
    printf("Results:\n");
    Print(pstr, n);

    return 0;
}
void Input(char *p[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        gets(p[i]);
    }
}
void Sort(char *p[], int n)
{
    char *t;
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (strcmp(p[j],p[i])<0)
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }
}
void Print(char *p[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%s\n", p[i]);
    }
}
