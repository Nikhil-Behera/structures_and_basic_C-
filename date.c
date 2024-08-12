#include<stdio.h>
#include<stdbool.h>
int main(){
    struct date{
        int day;
        int month;
        int year;
    }a,b;

    a.day=24;
    a.month=5;
    a.year=2024;

    b.day=31;
    b.month=8;
    b.year=2021;

    bool flag = true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if(flag==true) printf("The dates are same.");
    else printf("The dates are different.");
    return 0;
}