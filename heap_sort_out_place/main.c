#include <stdio.h>

#include "heap_sort.h"

void printArray(Element* arr, int n) {
    for (int i = 0; i < n; i++) {
        element_print(arr[i]);
        printf(" ");
    }
    printf("\n");
}

int main() {
    Element a[] = {10};
    int aSize = 1;

    printArray(a, aSize);
    heapSort(a, aSize);
    printArray(a, aSize);

    printf("\n");

    Element b[] = {20, 5};
    int bSize = 2;

    printArray(b, bSize);
    heapSort(b, bSize);
    printArray(b, bSize);

    printf("\n");

    Element c[] = {5, 2, 3, 1, 4};
    int cSize = 5;    

    printArray(c, cSize);
    heapSort(c, cSize);
    printArray(c, cSize);

    return 0;
}