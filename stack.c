#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int value){
    if (top==MAX-1){
        printf("stack overflow\n");

    }else{
        top++;
        stack[top]=value;
        printf("%d pushed to stack\n",value);
        }
}
int main(){
     push(10);
     push(20);
     push(30);
     return 0;
}