#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDynamicArray
{
protected:

	int _Size = 0;
	T* _TempArray = NULL;

public:

	T* OriginalArray = NULL;

	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;

		_Size = Size;

		OriginalArray = new T[_Size];
	}

	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}

	bool SetItem(int Index, T Value)
	{
		if (Index < 0 || Index >= _Size)
			return false;

		OriginalArray[Index] = Value;
		return true;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return (_Size == 0);
	}

	void PrintList()
	{
		for (int i = 0;i < _Size;i++)
		{
			cout << OriginalArray[i] << " ";
		}

		cout << "\n";
	}

	void Resize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;

		_TempArray = new T[NewSize];

		if (NewSize < _Size)
			_Size = NewSize;

		for (int i = 0;i < _Size;i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		delete[] OriginalArray;
		_Size = NewSize;
		OriginalArray = _TempArray;
	}
};

