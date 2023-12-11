#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;

int main() {
    int list1[5000];
    int list2[5000];
    int list3[5000];
    for (int i = 0; i < 5000; i++) {
        list1[i] = rand() % 100;
        list2[i] = list1[i];
        list3[i] = list1[i];
    }

    //sort list1 using bubble sort
    bubbleSort(list1, 5000);
    printAndReset("Bubble sort");
    //sort list2 using selection sort
    selectionSort(list2, 5000);
    printAndReset("Selection Sort");
    //sort list3 using insertion sort
    insertionSort(list3, 5000);
    printAndReset("Insertion Sort");
    return 0;
}