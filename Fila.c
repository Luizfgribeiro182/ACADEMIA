#include <stdio.h>

#define MAXID 100000
#define MAXFILA 50000

int main()
{
    printf("ola galera");
    int removido[MAXID+1];
    int fila[MAXFILA];
    int M, N;
    int i, j, r, primeiro;

    scanf("%d",&N);
    for (i=0; i<N; i++)
    {
        scanf("%d",&fila[i]);
    }

    memset(removido, 0, sizeof(removido));

    scanf("%d",&M);
    for (i=0; i<M; i++)
    {
        scanf("%d",&r);
        removido[r]=1;
    }

    primeiro=1;
    for (i=0; i<N; i++)
    {
        if (removido[fila[i]]==1)
        {
            continue;
        }
        if (primeiro==1)
        {
            printf("%d",fila[i]);
            primeiro=0;
        } else {
            printf(" %d",fila[i]);
        }
    }
    printf("\n");
    return 0;
}
