#include "DynamicArray.h"
#include<Windows.h>

DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
    cout << "Construct by 1 param\n";
    size = S;
    ptr = new int[S] {1,2,3,4,5};
}

DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor
{
    cout << "Copy construct\n";
    size = a.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = a.ptr[i];
    }
}
DynamicArray::~DynamicArray()
{
    cout << "Destruct\n";
    if (ptr != 0)
    {
        delete[] ptr;
    }
    Sleep(1000);
}
void DynamicArray::Input()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 20;
    }
}
void DynamicArray::Output()
{
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i] <<"\t";
    }
    cout << "\n---------------------------------\n";
}
int * DynamicArray::GetPointer()
{
    return ptr;
}
int DynamicArray::GetSize()
{
    return size;
}