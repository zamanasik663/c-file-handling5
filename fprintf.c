// writing to file using fprintf() function

#include<stdio.h>
#include<conio.h>
struct emp 
{
    int id;
    char name[50];
    float salary;
};


int main()
{

    struct emp e;

    FILE *fp;
    char ch = 'y';
    fp = fopen("fprintf.txt","w");
    if(fp == NULL){
      printf("can't to this file\n");
    }

    while(ch == 'y'){
      printf("Enter your name\n");
      scanf("%s",&e.name);
      printf("Enter your id\n");
      scanf("%d",&e.id);
      printf("Enter your salary\n");
      scanf("%f",&e.salary);
      fprintf(fp,"%s\t%d\t%f",e.name,e.id,e.salary);
      printf("do you want to another record(y/n): ");
      ch =getche();
    }
    fclose(fp);


    // FILE *filePointer;
    // filePointer = fopen("fprintf.txt","w");
    // if(filePointer == NULL){
    //   printf("can't open to this file\n");
    // }
    
    // fprintf(filePointer,"hello world");
    // fclose(filePointer);

    return 0;
}