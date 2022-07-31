#include <stdio.h>

int main()
{
    int temp;
    int i;
    int array_length;
    
    int array[10] = {19, 10, 8, 17, 9, 1, 3, 2, 4, 5};
    
    array_length = sizeof(array) / sizeof(int);
    
    printf("There are %d elements in this array.\n", array_length);
    for (i = 0; i < array_length; i++){
        while ((i > 0) && (array[i - 1] > array[i])){
            temp = array[i - 1];
            array[i - 1] = array[i];
            array[i] = temp;
            i--;
        }
    }
    
    printf("\n");
    printf("Here is the sorted array: \n");
    for (i = 0; i < array_length; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
