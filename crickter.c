#include<stdio.h>
#include<string.h>
int main(){
    struct cricketer{
        char name[90];
        int runs;
        int matches;
        float average;
    };

    struct cricketer a[2];
    for(int i=0;i<2;i++){
        scanf("%s",&a[i].name);
        scanf("%d",&a[i].runs);
        scanf("%d",&a[i].matches);
        scanf("%f",&a[i].average);
    }

   
    for(int i=0;i<2;i++){
        printf("%s\n",a[i].name);
        printf("%d\n",a[i].runs);
        printf("%d\n",a[i].matches);
        printf("%f",a[i].average);
    }
    
    return 0;
}