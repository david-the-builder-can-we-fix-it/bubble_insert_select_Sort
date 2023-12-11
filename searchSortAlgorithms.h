#include <iostream>
using namespace std;
int assignCount = 0;
int compCount = 0;

//bubbleSort
template <class elmType>
void bubbleSort(elmType list[], int length)
{
    for (int iteration = 1; iteration < length; iteration++)
    {
        for (int index = 0; index < length - iteration; index++)
        {
            compCount++;
            if (list[index] > list[index + 1])
            {
                assignCount++;
                assignCount++;
                assignCount++;
                swap(list[index], list[index + 1]);
            }
        }
    }
}





//selection sort
template <class elmType>
int minLocation(elmType list[], int first, int last)
{
    int minInd;
    minInd = first;
    for (int loca = first + 1; loca <= last; loca++)
    {
        compCount++;
        if (list[loca] < list[minInd])
        {
            minInd = loca;
        }
    }
    return minInd;
}

template <class elmType>
void selectionSort(elmType list[], int leng)
{
    int minInd;

    for (int loca = 0; loca < leng; loca++)
    {
        minInd = minLocation(list, loca, leng - 1);
        assignCount++;
        assignCount++;
        assignCount++;
        swap(list[loca], list[minInd]);
    }
}






//insertion sort
template <class elmType>
void insertionSort(elmType list[], int length)
{
    for (int firOutOfOrd = 1; firOutOfOrd < length; firOutOfOrd++)
    {
        compCount++;
        if (list[firOutOfOrd] < list[firOutOfOrd - 1])
        {
            assignCount++;
            elmType temp = list[firOutOfOrd];
            int location = firOutOfOrd;

            do
            {
                list[location] = list[location - 1];
                assignCount++;
                location--;
                compCount++;
            } while (location > 0 && list[location - 1] > temp);
            list[location] = temp;
            assignCount++;
        }
    }
}






//print and reset
void printAndReset(string mes)
{
    cout << mes;
    cout << "\nComparisons: " << compCount;
    cout << "\nItem assignments: " << assignCount << "\n\n";
    assignCount = 0;
    compCount = 0;
}
