#include<stdio.h>
void main()
{
    int sparse[30][30],triplet[30][3],row,col,temp=1,i,j,nzero=0;
    printf("Enter the number of rows and column:");
    scanf("%d%d",&row,&col);
    printf("enter elements");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&sparse[i][j]);
        }
    }
    //counting no. of nonzeros
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(sparse[i][j]!=0)
            {
                nzero++;
            }
        }
    }
    //convertion
    triplet[0][0]=col;
    triplet[0][1]=row;
    triplet[0][2]=nzero;
    //finding nonzero
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(sparse[i][j]!=0)
            {
                triplet[temp][0]=j;
                triplet[temp][1]=i;
                triplet[temp][2]=sparse[j][i];
                temp++;
            }
        }
    }
    //display
    for(i=0;i<nzero+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",triplet[i][j]);
        }
        printf("\n");
    }
}