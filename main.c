#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void main(){
    int n,ws,x,i=1,k,z,flag;
    int t[100] = {0};

    printf("Window Size \n");
    scanf("%d",&ws);
    printf("Frames \n");
    scanf("%d",&n);
    srand(time(0));

    while(i<=n){
        z=0;
        flag=1;
        for(k=i;k<i+ws && k<=n;k++){
            if(t[k]==1) {
                if (flag == 1)
                    z = z + 1;
                continue;
            }
            x=rand()%2;
            if(x==0){
                printf("Frame %d");
            }



        }
    }
}