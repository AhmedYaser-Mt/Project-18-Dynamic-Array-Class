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
		if (OriginalArray == NULL)
			return;

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

		delete OriginalArray;
		_Size = NewSize;
		OriginalArray = _TempArray;
	}

	T GetItem(int Index)
	{
		if (Index < 0 || Index >= _Size)
			return NULL;
		
		return OriginalArray[Index];
	}

	void Clear()
	{
		_Size = 0;
		delete OriginalArray;
		OriginalArray = new T[0];
	}

	void Reverse()
	{
		_TempArray = new T[_Size];

		for (int i = 0;i < _Size;i++)
		{
			_TempArray[i] = OriginalArray[_Size - 1 - i];
		}

		delete OriginalArray;
		OriginalArray = _TempArray;
	}

	bool DeleteItemAt(int Index)
	{
		if (Index < 0 || Index >= _Size)
			return false;

		_Size--;

		_TempArray = new T[_Size];

		for (int i = 0;i < Index;i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		for (int i = Index + 1;i < _Size + 1;i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}
};

