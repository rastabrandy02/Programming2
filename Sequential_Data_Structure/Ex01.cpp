#include <iostream>
using namespace std;

#define CHUNCK 10
class DynamicArray
{
private:
	float* myArray;
	unsigned int size;
	unsigned int capacity;
public:
	


	DynamicArray() 
	{
		capacity = CHUNCK; 
		myArray = nullptr;
		size = 0;
	};
	DynamicArray(DynamicArray* other)
	{
		capacity = CHUNCK;
		size = other->size;
		while (size > capacity) capacity += CHUNCK;
			myArray = new float[capacity];
			for (int i = 0; i < size; i++)
			{
				myArray[i] = *(other->myArray + i);
			}
		
	}
	DynamicArray(float* array, int elements)
	{
		size = elements;
		capacity = CHUNCK;
		while (size > capacity) capacity += CHUNCK;
		 myArray = new float [capacity];
		
		for (int i = 0; i < elements; i++)
		{
			myArray[i] = *(array + i);
		}
		
	}
	~DynamicArray()
	{
		delete[] myArray;
	}
	bool Empty(int index)
	{
		if (index >= size) return true;
		else return false;
	}
	unsigned int Size() { return size; }

	float& operator[](unsigned int index)
	{
		return myArray[index];
	}
	const float& operator[] (unsigned int index) const
	{
		return myArray[index];
	}
		

	void AddElementEnd(float element)
	{
		if (size < capacity)
		{
			for (int i = 0; i < capacity; i++)
			{
				if (Empty(i))
				{
					myArray[i] = element;
					break;
				}
			}
			size++;
		}
		else
		{
			capacity += CHUNCK;
			
			float* auxArray = new float[capacity];
			for (int i = 0; i < size; i++)
			{
				auxArray[i] = myArray[i];
			}			
			auxArray[++size] = element;
			delete[] myArray;
			myArray = auxArray;
			
		}
	}

	void AddElementBeginning(float element)
	{
		if (size < capacity)
		{
			for (int i = 0; i < size; i++)
			{
				myArray[i + 1] = myArray[i];
			}
			myArray[0] = element;
			size++;
		}
		else
		{
			capacity += CHUNCK;
			float* auxArray = new float[capacity];
			for (int i = 0; i < size; i++)
			{
				auxArray[i + 1] = myArray[i];
			}
			auxArray[0] = element;
			size++;
			delete[] myArray;
			myArray = auxArray;
			

		}
	}

	void AddElementIndex(int index, float element)
	{
		if (size < capacity)
		{
			for (int i = 0; i < size; i++)
			{
				if (i >= index)
				{
					myArray[i + 1] = myArray[i];
				}
			}
			myArray[index] = element;
			size++;
		}
		else
		{
			capacity += CHUNCK;
			float* auxArray = new float[capacity];
			for (int i = 0; i < size; i++)
			{
				auxArray[i] = myArray[i];
			}
			delete[] myArray;
			myArray = auxArray;
			for (int i = 0; i < size; i++)
			{
				if (i >= index)
				{
					myArray[i + 1] = myArray[i];
				}
			}
			myArray[index] = element;
			size++;

		}
	
	}

	void DeleteElementEnd()
	{
		size--;
	}

	void DeleteElementBeginning()
	{
		for (int i = 0; i < size; i++)
		{
			myArray[i] = myArray[i + 1];
		}
		size--;
	}
	void DeleteElementIndex(int index)
	{
		for (int i = 0; i < size; i++)
		{
			if (i >= index)
			{
				myArray[i] = myArray[i + 1];
			}
			
		}
		size--;
	}
};