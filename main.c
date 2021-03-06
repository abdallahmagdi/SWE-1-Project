#include <stdio.h>
#include <string.h>
#include <math.h>

void displayPathtoPrincess(int n, char grid[101][101]){
    int a,b,x,y;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(grid[i][j]=='m'){
                a=i;
                b=j;
            }else if(grid[i][j]=='p'){
                x=i;
                y=j;
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
    if(a<x){
        a++;
        printf("DOWN \n");
    }else if(a>x){
        a--;
        printf("UP \n");
    }else if(b<y){
        b++;
        printf("RIGHT \n");
    }else if(b>y){
        b--;
        printf("LEFT \n");
    }
            }
    }
}

int main(void) {

    int m;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}
