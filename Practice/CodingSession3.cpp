// stack
// recursion
#include <stdio.h>

char buffer[100]; // 1 2 4

int index = 0;
char pop()
{
  if ( index == 0)
  {
    printf ( "vo ti loh");
    return -1;
  }
  buffer[index]='\0';
  return buffer[--index];
}
void push_(char elem)
{
  if ( index == 99)
  {printf ( "vo ti loh");
    return;
  }
buffer[index++]=elem;
}

int my_strlen(char* p){
  int size = 0;
  // for ( arr[size] != '\0'; ++size);
  while(*(p+size) != '\0'){
    ++size;
  }
  return size;
}

void printArray_(char* p_arr) {
  int i;
  for (i = 0; *(i + p_arr) != '\0'; ++i) {
    printf("arr[%d] = %c\n",i, p_arr[i]);
  }
}

int fact(int n){
  if(n == 0){
    return 1;
  }
  printf("%d", n);
  return n * fact(n - 1);
}

// factorial через рекурсію



int main() {
  char arr[9] = {'1', '2', '3', '4', '5', '6', '7'};
  printf("%d\n", my_strlen(arr));
  // printf("%p\n", p);
push_(122);
  printf ("%c",pop());
    printf ("%c",pop());
  
  //printf("size: %d", my_strlen(arr));
 // printArray_(arr);
  //printf("%d", fact(4));
  return 0;
}
