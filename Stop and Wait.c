#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(){
    printf("Stop and Wait Protocol ");
    int i=0,j=0,x,x1=10,x2,window_size;
    printf("\nEnter the window size : ");
    scanf("%d",&window_size);

    while(window_size!=0){
        printf("\nFrame %d transmission in progress...",i+1);
        srand(x1++);
        x=rand()%10;
        if(x%2==0) {
            for (x2 = 1; x2 < 2; x2++) {
                printf("\nWaiting for %d seconds...",&x2);
                sleep(x2);
                printf("\nNo Acknowledgement yet...");
            }
            printf("\nFrame %d retransmission in progress...",j+1);
            srand(x1++);
            x=rand()%10;
        }
        printf("\nFrame %d Acknowledgement received",i+1);
        window_size-=1;
        i++;
        j++;
    }
    printf("\n");
}