// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void QuickSort(int M[], int left, int right);

int main()
{
    int M[50];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    NhapMang(M, n);
    cout << "\nMang sau khi nhap: \n";
    XuatMang(M, n);
    QuickSort(M, 0, n - 1);
    cout << "\nMang sau khi sap xep: \n";
    XuatMang(M, n);
    return 0;

}

void NhapMang(int M[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        M[i] = rand() % 100;
    }
}

void XuatMang(int M[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << M[i] << "\t";
    }
}

void QuickSort(int M[], int left, int right) // left va right la vi tri trai ngoai cung va phai ngoai cung
{
    
    if (left >= right) return;
    int pivot = (left + right) / 2;
    int i = left;
    int j = right;
    do {
        //while (M[i] < M[pivot]) i++; // tang dan
        //while (M[j] > M[pivot]) j--; // tang dan
        while (M[i] > M[pivot]) i++; // giam dan
        while (M[j] < M[pivot]) j--; // giam dan
        if (i <= j)
        {
            int temp = M[i];
            M[i] = M[j];
            M[j] = temp;
            i++;
            j--;
        }
    } while (i < j);
    QuickSort(M, left, j);
    QuickSort(M, i, right);
    
    
}
