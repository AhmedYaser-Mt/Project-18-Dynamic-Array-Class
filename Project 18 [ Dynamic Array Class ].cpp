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

    MyDynamicArray.DeleteItemAt(2);
    cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after deleting Item(2) :\n";
    MyDynamicArray.PrintList();

    /*cout << "\nItem (2) : " << MyDynamicArray.GetItem(2) << "\n";

    MyDynamicArray.Reverse();

    cout << "\nArray Items after Reverse :\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.Clear();

    cout << "\nArray Items after Clear :\n";
    MyDynamicArray.PrintList();*/

    /*MyDynamicArray.Resize(2);
    cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Elements after resize to 2 :\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.Resize(10);
    cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Elements after resize to 10 :\n";
    MyDynamicArray.PrintList();*/

    system("pause>0");
    return 0;
}
