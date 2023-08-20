#include <stdio.h>
#include <stdlib.h>

int main()
{int t[10];
int x,i,n;
    for(i=0;i<10;i++){
            printf("enter t[%d]",i+1);
            scanf("%d",&t[i]);
    }
    printf("enter n value");
    scanf("%d",&n);

x=0;
for(i=0;i<10;i++){
    if(t[i]==n)
        x++;
}
printf("x=%d nd n=%d",x,n);


    return 0;
}
