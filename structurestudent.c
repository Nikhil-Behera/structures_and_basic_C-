#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        int RollNo;
        char Name[90];
        int sub1;
        int sub2;
        int sub3;
        int total;
        float percentage;
    };
    int tn;
    printf("Enter the total no. of students:\n ");
    scanf("%d",&tn);
    int total;
    float percent;

    struct student stu[tn];
    
    

    for(int i=1;i<=tn;i++){
        printf("Enter the Student's Rool No: \n");
        scanf("%d",&stu[i].RollNo);
        printf("Enter the Student's Name: \n");
        scanf("%s",&stu[i].Name);
        printf("Enter the First subject's marks: \n");
        scanf("%d",&stu[i].sub1);
        printf("Enter the Second subject's marks: \n");
        scanf("%d",&stu[i].sub2);
        printf("Enter the Third subject's marks:\n ");
        scanf("%d",&stu[i].sub3);
        total=stu[i].sub1+stu[i].sub2+stu[i].sub3;
        percent=(total/3);
        

    }

    
    
    for(int i=1;i<=tn;i++){
        printf("Roll No.\n %d\n",stu[i].RollNo);
        printf("Name\n%s\n",stu[i].Name);
        printf("Subject 1\n%d\n",stu[i].sub1);
        printf("Subject 2\n%d\n",stu[i].sub2);
        printf("Subject 3\n%d\n",stu[i].sub3);
        printf("Total\n%d\n",total);
        printf("Percentage\n%f\n",percent);
    }
    return 0;
}