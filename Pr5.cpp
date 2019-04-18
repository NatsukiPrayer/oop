//
//  main.cpp
//  aaaaaa
//
//  Created by student on 18/04/2019.
//  Copyright © 2019 student. All rights reserved.
//

#include <iostream>
//#include "pch.h"


using namespace std;
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
    }
}
    std::cout << "{";
    for (i=0; i < n; i++){
        if (i != n-1)
            std::cout << arr[i] << ",";
        else
            std::cout << arr[i] << "}" << endl;
    }
}

void bubbleSort(double arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]){
                double temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
    }
    std::cout << "{";
    for (i=0; i < n; i++){
        if (i != n-1)
            std::cout << arr[i] << ",";
        else
            std::cout << arr[i] << "}" << endl;
    }
}

int main()
{
    int n= 4;
    int arr[]={4, 3, 8, 0};
    int n1 = 5;
    double arr1[]={3.33, 4.5, 7.00, 1.11, 10.10};
    bubbleSort(arr, n);
    bubbleSort(arr1, n1);
}


