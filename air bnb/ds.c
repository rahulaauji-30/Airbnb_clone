#include<stdio.h>
int stack[5];
int top=-1;
void push(){
    if(top==4){
        printf("Overflow");
        return;
    }
    top++;
    printf("Enter Element:- ");
    scanf("%d",&stack[top]);
}
void pop(){
    if (top == 4)
    {
        printf("Overflow");
        return;
    }
    printf("%d removed Successfully",stack[top]);
    top--;
}
void main(){
    int choice;
    while (choice!=3)
    {
        switch (choice)
        {
        case 1:push();
            break;
        
        case 2:pop();
            break;
        default:print("Incorrect ");
            break;
        }
    }
    
}