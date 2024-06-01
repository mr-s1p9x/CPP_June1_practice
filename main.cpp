#pragma once
#include "DynamicArray.h"



DynamicArray GetObj() //������� �� ��������
{
    DynamicArray obj(3);
    obj.Input();

    return obj;
}
void main()
{
    DynamicArray a(5); // constructor 1 param

    for (int i = 0; i < a.GetSize(); i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    //a.Input();
    //a.Output();
    //DynamicArray b = a; // copy constructor
    //b.Output();

    //DynamicArray rezult = GetObj();


    system("pause");
}