#include<stdio.h>
void main(){
    int i, j, n=0, a[5][6]={ {0,0,0,0,9,0},
                        {0,8,0,0,0,0},
                        {4,0,0,2,0,0},
                        {0,0,0,0,0,5},
                        {0,0,2,0,0,0}
                        };
    printf("\nThe matrix is:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d\t", a[i][j]);
            if(a[i][j]>0)
                n++;
        }
        printf("\n");
    }
    printf("Row\tColumn\tValue\n");
    printf("%d\t%d\t%d\n", i, j, n);
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            if(a[i][j]>0)
                printf("%d\t%d\t%d\n", i, j, a[i][j]);
        }
    }
}
