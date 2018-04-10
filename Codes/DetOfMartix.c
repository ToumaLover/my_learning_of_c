#include <stdio.h>
#include <malloc.h>

double Dslove(int n,double *a);
int PosOrNeg(int);
double Submatrix(int n,int m,double *a);

int main()
{
    double *p=NULL;
    double ans;
    int n;
    int i,j;
    printf("Please enter matrix size n:");
    scanf("%d",&n);
    p = calloc(n*n,sizeof(double));
    if(p == NULL){exit(-1);}
    printf("Please input matrix line by line:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%lf",&p[i*n+j]);
        }
    }
    ans = Dslove(n,p);
    free(p);
    printf("result = %f\n",ans);
    return 0;
}
u
double Dslove(int n,double *a)
{
    double sum=0;
    int i;

    if(n==1){return *a;}
    else if(n==2){return ((*a)*(*(a+3))-(*(a+1))*(*(a+2)));}
    else
    {
        for(i=0;i<n;i++)
        {
            sum += PosOrNeg(i)*(*(a+i))*Submatrix(n,i,a);
        }
    }
    return sum;
}

int PosOrNeg(int n)
{
    int i;
    int t=1;
    for(i=0;i<n;i++)
    {
        t*=-1;
    }
    return t;
}

double Submatrix(int n,int m,double *a)
{
    double *p;
    double ans;
    int i,j;

    p = calloc((n-1)*(n-1),sizeof(double));
    if(p == NULL){exit(-1);}
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<m)
            {
                p[i*(n-1)+j]=a[(i+1)*n+j];
            }
            else if(j>m)
            {
                p[i*(n-1)+j-1]=a[(i+1)*n+j];
            }
        }
    }
    ans = Dslove(n-1,p);
    free(p);
    return ans;
}
