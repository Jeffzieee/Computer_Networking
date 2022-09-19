#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
void main(){
    int n, ws, flag = 0, k,i = 1, z = 0, tt = 0, x;
    int t[100] = {0};
    printf("Enter number of frames :");
    scanf("%d", &n);
    printf("\nEnter window size :");
    scanf("%d", &ws);
    srand(time(0));
    while(i <= n)
    {
        z = 0;
        flag = 1;
        for(k = i;k < i + ws && k <= n; k++)
        {
            if(t[k] == 1)
            {
                if(flag)
                    z = z + 1;
                continue;
            }
            x = rand() % 2;
            if(x == 0)
            {
                printf("\nAcknowledgement of frame %d not received", k);
                printf("\nRetransmitting frame %d", k);
                flag = 0;
            }
            else
            {
                printf("\nAcknowledgement of frame %d received", k);
                t[k] = 1;
                if(flag == 1)
                    z = z + 1;
            }
        }
        i = z + i;
    }
    printf("\n");
}


