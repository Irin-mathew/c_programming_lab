# include<stdio.h>
# include<stdlib.h>
#define max_size 100
int top=-1;
int stack[max_size];
void insert();
void delete();
void display();

int main()
{
    int choice;
    while(1){
    printf("Enter your choiice\n");
    printf("1.Insert\n2.Delete\n3.Display\n4.exit\n");
    scanf("%d",choice);
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
       delete();
    break;
    case 3:
    display();
    case 4:
    exit(0);
    
    default:
    printf("invalid choice");
        break;
    }
}
}
void inser()
{
    int num;
    if(top==max_size-1)
    {
        printf("stack full");
    return;
    }
printf("enter the element");
scanf("%d",num);
stack[++top]=num;
}
void delete()
{
    if (top=-1)
    {
        printf("stack empy");
    }
    printf("the deleted element is %d\n",stack[--top]);
    
}
void display()
{
    if (top==-1)
    {
        printf("empty");
    }
    printf("stack elements are :");
    for(int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
printf("\n");
}