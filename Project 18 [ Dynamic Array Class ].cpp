#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray <short> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty ? : " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items :\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAt(4, 500);
    cout << "\n\nArray Items after insert 500 at index 2 :";
    cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    system("pause>0");
    return 0;
}
