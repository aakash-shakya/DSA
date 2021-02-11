#include<bits/stdc++.h>
#define size 10

typedef struct{
    int top;
    int arr[size];
}stack;


bool empty(stack *ps){
    /*
        if(ps->top==-1){
            return true;
        }
        else{
            return false;
        }
    */
   return (ps->top==-1);
}

int pop(stack *ps){
    if(empty(ps)){
        printf("stack is underflow\n");
        exit(1);
    }
    else{
        return (ps->arr[ps->top--]);
    }
}

bool isfull(stack *ps){
    /*
        if (ps->top==size-1){
            return true;
        }
        else{
            return false;
        }
    */
   return (ps->top==size-1);
}

int push(stack *ps,int element){
    if (isfull(ps)){
        printf("Stack is full\n");
        exit(1);
    }
    else{
        printf("pushing element in stack\n");
        return (ps->arr[++(ps->top)]=element);
    }
}

int main(){
    stack s;
    s.top = -1;
    bool emptyStatus, fullStatus;
/*    emptyStatus = empty(&s);
    if (emptyStatus==true){
        printf("stack is empty");
    }
    else{
        printf("stack is not empty\n");
        printf("pop off item is %d",pop(&s));
    }
*/

    for (int i=0; i<20; i++){
        fullStatus = isfull(&s);
        emptyStatus = empty(&s);
        if (emptyStatus){
            printf("stack is empty \n");
            printf("element added at empty stack status is %d \n\n",push(&s,i));
        }
        else if (!emptyStatus && !fullStatus){
            printf("element added in stack %d \n\n",push(&s,i));
        }
        else{
            printf("stack is full\n");
            printf("pop off item is %d \n\n",pop(&s));
        }
    }

    for(int i=0;i<size;i++){
        printf("elements in stack --> ");
        printf("%d\n",s.arr[i]);
    }
    
    return 0;
}