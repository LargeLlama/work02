#include <stdio.h>

int main()
{
    //declare an usigned int > 2.1 billion and a pointer for it
    unsigned int num = 3100000000;
    char * pointer = &num; 
    printf("%d\n", pointer);

    //print out the number in hex
    printf("Num %d in hex: %x\n", num, num);
    
    //for loop to print out each individual byte
    for(int i = 0; i < sizeof(num); i++)
        printf("Byte #%d of num %d: %hhx\n", i, num, pointer++);    

    pointer = &num;
    //for loop to modify each byte by one
    for(int i = 0; i < sizeof(num); i++)
    {
        //(*pointer)++;
        pointer++;
        printf("Increased byte #%d\nIn decimal: %d\nIn hex: %x\nThe address: %p\n", i, *pointer, *pointer,  pointer);
    }
}
