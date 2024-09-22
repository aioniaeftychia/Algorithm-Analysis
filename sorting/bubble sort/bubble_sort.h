//
// Created by matth on 2024/09/22.
//

#ifndef BUBBLR_SORT_H
#define BUBBLR_SORT_H
#include <cstdio>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int* array, int size) {
    for (int i=0; i<size-1;i++) {
        printf("[%d]:%d\t", i, array[i]);
    }
        printf("[%d]:%d\t\n", size-1, array[size-1]);
}

void bubble_sort(int* unsorted_array, int num_elements) {
    printf("Bubble sorting...\n");
    for (int i=0; i<num_elements;i++) {
        for (int j=0; j<num_elements-1; j++) {
            if (unsorted_array[j]>unsorted_array[j+1]) {
                swap(&unsorted_array[j], &unsorted_array[j+1]);
            }
            print_array(unsorted_array, num_elements);
        }
    }
}

#endif //BUBBLR_SORT_H
