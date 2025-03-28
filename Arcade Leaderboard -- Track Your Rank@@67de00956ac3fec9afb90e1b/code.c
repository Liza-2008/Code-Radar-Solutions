#include <stdio.h>
void computeRanks(int scores[],int alice[],int m)
{
    int ranks[n];
    int rank=1;

    ranks[0]=rank;
    for (int i=1;i<n;i++)
    {
        if (scores[i]==scores[i-1])
        ranks[i]=rank;
        else
        ranks[i]=++rank;
    }
    int i=n-1,j=0;
    while(j<m)
    {
        while (i>=0 && alice[j]>=scores[i])
        i--;

        printf("%d\n",(i==-1)? 1:ranks[i]+1);
        j++;
    }
}

int main()
{
    int n,m;

    scanf("%d",&n);
    int scores[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);

        scanf("%d",&m);
        int alice[m];
        for (int i=0;i<m;i++)
        scanf("%d",&alice[i]);

        computeRanks(scores,n,alice,m);
        return 0;
    }
}