#include <stdio.h>

#define MAX_SIZE 100
#define MAX_BUF 100
#define MAX_ARR 100

char buffer[MAX_BUF]; // 1 2 4
int val[MAX_SIZE];

int pbuf = 0;
int pval = 0;

int pop()
{
    if (pval <= 0)
    {
        printf("Error index out of range");
        return -1;
    }
    return val[--pval];
}

void push(int elem)
{
    if (pval > MAX_SIZE - 1)
    {
        printf("Error mistsake...Max Size");
        return;
    }
    val[pval++] = elem;
}

// int my_strlen(char* p){
//   int size = 0;
//   // for ( arr[size] != '\0'; ++size);
//   while(*(p+size) != '\0'){
//     ++size;
//   }
//   return size;
// }

void printArray_(char* p_arr) {
    int i;
    for (i = 0; *(i + p_arr) != '\0'; ++i) {
        printf("arr[%d] = %c\n", i, p_arr[i]);
    }
}


void printArrayInt(int p_arr[]) {
    int i;
    for (i = 0; i < pval; ++i) {
        printf("arr[%d] = %d\n", i, p_arr[i]);
    }
}



int main() { // 1 2 3 + -
    char arr[MAX_ARR] = { '1', '2', '3', '4','5','+', '-', '+', '-' };
    //                    0    1    2    3    4

    for (int i = 0; i < 5; i++) {
        push(arr[i] - '0');
    }
    printArrayInt(val);

    buffer[0] = arr[5];
    buffer[1] = arr[6];
    buffer[2] = arr[7];
    buffer[3] = arr[8];
    int pbuf = 0;
    for (int i = 0; i < 4; i++) {
        buffer[i] = arr[i + 5];
    }

    // 1 2 3 + -
    // 1 2 3

    while (buffer[pbuf] != '\0') {
        switch (buffer[pbuf]) {
        case '+':
            push(pop() + pop());
            pbuf++;
            break;
        case '-':
            int val_i = pop();
            push(pop() - val_i);
            pbuf++;
            break;
        }
        printArrayInt(val);
    }

    // printf("%p\n", p);


    //printf("size: %d", my_strlen(arr));
   // printArray_(arr);
    //printf("%d", fact(4));
    return 0;
}