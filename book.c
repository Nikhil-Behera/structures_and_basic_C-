#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int price;
        int pages;
    }a,b,c;

    strcpy(a.name,"secret seven");
    a.price= 890;
    a.pages=500;

    printf("The name of the book is: %s\n ",a.name);
    printf("The pricw  of the book is : %d\n ",a.price);
    printf("The no. of pages in the book are: %d ",a.pages);
    
    return 0;
}
