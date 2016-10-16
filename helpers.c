/**
 * helpers.c
 *
 * Yehor Valentiukevych
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Возвращает True, если значение в массиве из N значений, иначе false.
 */
bool search(int value, int values[], int n) 
{
    
    int min = 0;
    int max = n - 1;
   
    while (max >= min) {
        int midl = (max + min) / 2;
            if (values[midl] == value)
                return true;
            if (min == max && values[midl] != value)
                return false;
            else if (values[midl] < value)
                min = midl + 1;
            else
                max = midl - 1;
    }
    return false;
}

/**
 * Массив всевозможных значений N.
 */
 
void sort(int values[], int n)
{
    // реализовать O(n^2) алгоритм сортировки
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++)
            if (values[j] > values[j + 1]) {
                int tmp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = tmp;
            }
    } 
    return;
}
