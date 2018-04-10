#include <stdio.h>
#include <string.h>

//‘a'or'A' are both ok;

struct person
{
    char name[20];
    int count;
};

struct person leader[3] = {"li", 0, "zhang", 0, "wang", 0};

int main()
{
    int i, j = 0,n;
    char leader_name[20];

    for (i = 0; i < 10; i++)
    {
        printf("Input vote %d:",i+1);
        scanf("%s", leader_name);
        j = 0;
        do
        {
            if(leader_name[j]<='Z')
            {
                leader_name[j] += ('a'-'A');
            }
            j++;
        }while(leader_name[j]!='\0');
        for (j = 0; j < 3; j++)
            if (strcmp(leader_name,leader[j].name)==0)
        leader[j].count++;
    }
    printf("Election results:\n");
    n=10;
    for (i = 0; i < 3; i++)
    {
        printf("%8s:%d\n", leader[i].name, leader[i].count);
        n -= leader[i].count;
    }
    printf("Wrong election:%d\n",n);
    return 0;
}
