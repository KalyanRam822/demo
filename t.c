#include <stdio.h>
int main(){
    int vertices=5;
    int adj[5][5]={0};
    adj[0][1]=adj[1][0]=1;
    adj[0][4]=adj[4][0]=1;
    adj[1][2]=adj[2][1]=1;
    adj[1][3]=adj[3][1]=1;
    adj[1][4]=adj[4][1]=1;
    adj[2][3]=adj[3][2]=1;
    adj[3][4]=adj[4][3]=1;
    printf("adjacency matrix:\n");
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++)
        printf("%d ",adj[i][j]);
        printf("\n");
    }


}