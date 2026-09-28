#include<stdio.h>
#include<stdio.h>

struct Node{
int value ; 
struct Node*next ; 
};
struct Node*head=NULL ; 
void push(int data ) {
    struct Node*newNode = (struct Node*)malloc(sizeof (struct Node));
    if (!newNode){
        printf("Memory overflow!\n ");
        return; 

    }
    newNode->value = data ; 
    newNode->next = top ; 
    top = newNode ; 
    printf(%d pushed to stack.\n , data);

}

void pop(){
    if(top==NULL){
        printf("Stack underflow!\n");
        return; 

    }

    struct Node*temp = top ; 
    printf("%d popped from stack. \n ", temp->value);
}
