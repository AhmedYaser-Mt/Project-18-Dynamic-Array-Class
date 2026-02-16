#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    cout << "\n===== Dynamic Array Full Test =====\n\n";

    clsDynamicArray <int> MyDynamicArray(5);

    cout << "Initial Size : " << MyDynamicArray.Size() << endl;
    cout << "Is Empty ? " << MyDynamicArray.IsEmpty() << endl;

    cout << "\n--- Setting Initial Values ---\n";
    for (int i = 0; i < MyDynamicArray.Size(); i++)
    {
        MyDynamicArray.SetItem(i, (i + 1) * 10);
    }

    MyDynamicArray.PrintList();

    cout << "\n--- GetItem(2) ---\n";
    cout << "Value at index 2 : " << MyDynamicArray.GetItem(2) << endl;

    cout << "\n--- Reverse ---\n";
    MyDynamicArray.Reverse();
    MyDynamicArray.PrintList();

    cout << "\n--- Resize to 3 ---\n";
    MyDynamicArray.Resize(3);
    cout << "Size : " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();

    cout << "\n--- Resize to 6 ---\n";
    MyDynamicArray.Resize(6);
    cout << "Size : " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();

    cout << "\n--- InsertAt(2, 99) ---\n";
    MyDynamicArray.InsertAt(2, 99);
    MyDynamicArray.PrintList();

    cout << "\n--- InsertAtBeginning(111) ---\n";
    MyDynamicArray.InsertAtBeginning(111);
    MyDynamicArray.PrintList();

    cout << "\n--- InsertAtEnd(222) ---\n";
    MyDynamicArray.InsertAtEnd(222);
    MyDynamicArray.PrintList();

    cout << "\n--- InsertBefore(2, 333) ---\n";
    MyDynamicArray.InsertBefore(2, 333);
    MyDynamicArray.PrintList();

    cout << "\n--- InsertAfter(2, 444) ---\n";
    MyDynamicArray.InsertAfter(2, 444);
    MyDynamicArray.PrintList();

    cout << "\n--- Find(99) ---\n";
    int index = MyDynamicArray.Find(99);
    if (index != -1)
    {
        cout << "99 found at index : " << index << endl;
    }
    else
    {
        cout << "99 not found\n";
    }

    cout << "\n--- DeleteItem(99) ---\n";
    MyDynamicArray.DeleteItem(99);
    MyDynamicArray.PrintList();

    cout << "\n--- DeleteItemAt(1) ---\n";
    MyDynamicArray.DeleteItemAt(1);
    MyDynamicArray.PrintList();

    cout << "\n--- DeleteFirstItem ---\n";
    MyDynamicArray.DeleteFirstItem();
    MyDynamicArray.PrintList();

    cout << "\n--- DeleteLastItem ---\n";
    MyDynamicArray.DeleteLastItem();
    MyDynamicArray.PrintList();

    cout << "\n--- Clear ---\n";
    MyDynamicArray.Clear();
    cout << "Size after Clear : " << MyDynamicArray.Size() << endl;
    cout << "Is Empty ? " << MyDynamicArray.IsEmpty() << endl;
    MyDynamicArray.PrintList();

    cout << "\n===== End of Test =====\n";

    system("pause>0");
    return 0;
}
