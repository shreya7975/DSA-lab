#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct stack{
    int top;
    int data[SIZE];
};
typedef struct stack STACK;
void push(STACK *s,int item){
    if(s->top==SIZE-1)
        printf("\n stack overflow");
    else{
        s->top=s->top+1;
        s->data[s->top]=item;
    }
}
void pop(STACK *s){
    if(s->top==-1)
        printf("\n stack underflow");
    else{
        printf("\nelement poped is %d",s->data[s->top]);
        s->top=s->top-1;
    }
}
void display(STACK S){
    int i;
    if(S.top==-1)
        printf("\n stack is empty");
    else{
        printf("\n stack content are\n");
        for(i=S.top;i>=0;i--)
            printf("%d\n",S.data[i]);
    }
}
int main(){
    int ch,item;
    STACK S;
    S.top=-1;
    for(;;){
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.display");
        printf("\n4.exit");
        printf("\n read choice: ");
        scanf("%d",&ch);
        switch(ch){
                    case 1:printf("\n read elements to be pushed: ");
                            scanf("%d",&item);
                            push(&S,item);
                            break;
                    case 2:pop(&S);
                            break;
                    case 3:display(S);
                            break;
                    default:exit(0);
        }
    }return 0;
}

