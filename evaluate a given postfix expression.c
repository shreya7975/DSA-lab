#include <stdio.h>
#include <stdlib.h>
#include<c.type.h>
#include<math.h>
#define SIZE 10
struct STACK{
    int top;
    float data[SIZE];
};
typedef struct stack STACK;
void push(STACK *s,float item)
{
    s->data[++(s->top)]=item;
}
float pop(STACK *s)
{
    return(s->data[(s->top)--]);
}
float compute(float opr1,char symbol,float opr2)
{
    switch(symbol){
                    case '+':return opr1+opr2;
                    case '-':return opr1-opr2;
                    case '*':return opr1*opr2;
                    case '/':return opr1/opr2;
                    case '^':return pow(opr1,opr2);
                }
}
float evaluatepostfix(STACK *s,char postfix[20]){
        float opr1,opr2,res;
        char symbol;
        for(i=0;postfix[i]='\0';i++)
            symbol=postfix[i];
            if(isdigit(symbol))
                push(s,symbol-'0');
            else{
                opr2=pop(s);
                opr1=pop(s);
                res=compute(opr1,symbol,opr2);
                push(s,res);
            }
        }
        return pop(s);
    }
    int main(){
    char postfix SIZE[20]
    STACK s;
    s.top=-1;
    float res;
    printf("\n read postfix expression\n");
    scanf("%s",postfix);
    res=evaluatepostfix(&s,postfix);
    printf("\n the final result is %f",res);
    return 0;
}
}
