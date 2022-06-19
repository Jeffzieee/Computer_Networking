#include<stdio.h>

struct node{
    int dist[20];
    int from[20];
}router[10];

void main(){
    int n,i,j,k,cost_mat[20][20],counter=0;

    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            printf("\nEnter the distance of Node%d to Node%d: ",i+1,j+1);
            scanf("%d",&cost_mat[i][j]);
            cost_mat[i][i]=0;
            router[i].dist[j]=cost_mat[i][j];
            router[i].from[j]=j;
        }

    do{
        counter=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                for(k=0;k<n;k++)
                    if(router[i].dist[j]>cost_mat[i][k]+router[k].dist[j]){
                        router[i].dist[j]=router[i].dist[k]+router[k].dist[j];
                        router[i].from[j]=k;
                        counter++;
                    }
    }while(counter!=0);

    for(i=0;i<n;i++){
        printf("\n\nState of Router%d is: ",i+1);
        for(j=0;j<n;j++){
            printf("\nNode%d through Node%d with Distance = %d",j+1,router[i].from[j]+1,router[i].dist[j]);
        }
    }
}