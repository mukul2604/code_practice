#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int queue[MAX];
int front = 0;
int rear = -1;
int item_count = 0;

int peek() {
   return queue[front];
}

bool isempty() {
   return item_count == 0;
}

bool isfull() {
   return item_count == MAX;
}

int size() {
   return item_count;
}  

void insert(int data) {

   if(!isfull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      queue[++rear] = data;
      item_count++;
   }
}

int remove() {
   int data = queue[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   item_count--;
   return data;  
}

int main() {
   insert(1);
   insert(12);
   insert(15);

	
   if(isfull()){
      printf("Queue is full!\n");   
   }

   int num = remove();
	
   printf("Element removed: %d\n",num);
   insert(16);
   printf("Element at front: %d\n",peek());

   printf("----------------------\n");
   printf("index : 5 4 3 2  1  0\n");
   printf("----------------------\n");
   printf("Queue:  ");
	
   while(!isempty()) {
      int n = remove();           
      printf("%d ",n);
   }   
}
