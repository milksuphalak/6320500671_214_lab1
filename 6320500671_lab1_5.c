#include<stdio.h>
int main()
{
    int num,max,pos;
    scanf("%d",&num);
    int m[num];
    for (int i=0;i<num;i++)
    {
        scanf("%d",&m[i]);

    }
    max=m[0];
    for (int i=0;i<num;i++)
    {
        if(m[i]>=max)
        {
            max=m[i];
            pos=i;
        }

    }
    for (int i=0;i<num;i++)
    {
        if(m[pos]==m[i])
        {
            pos=i;
            break;
        }
    }

    printf("%d %d",pos+1,m[pos]);

    return 0;
}
