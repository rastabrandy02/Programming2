#include <iostream>
using namespace std;
struct Node
{
	Node* prevNode;
	Node* nextNode;
	float value;
};
class LinkedList
{
public:
	
	unsigned int nodeNum = 0;
	//Node* node;
	Node* firstNode = nullptr;
	Node* lastNode = nullptr;
	LinkedList() {};
	LinkedList(LinkedList* other)
	{
		
		Node* otherNode = other->firstNode;
		
		for (int i = 0; i < other->nodeNum; i++)
		{
			 AddElementEnd(otherNode->value);
		}
		nodeNum = other->nodeNum;
		
	}
	LinkedList(float* array, unsigned int size)
	{
		Node* node = firstNode;
		

		for (int i = 0; i < size; i++)
		{
			AddElementEnd(*(array + i));

		}
		nodeNum = size;
	}
	~LinkedList() { CleanUp(); }

	bool Empty()
	{
		if (nodeNum == 0) return true;
		else return false;
	}

	unsigned int size()
	{
		return nodeNum;
	}

	float& operator[] (unsigned int index)
	{
		Node* node = firstNode;
		for (int i = 0; i < index; i++)
		{
			node = node->nextNode;
		}
		return node->value;
	}
	const float& operator[](unsigned int index) const
	{
		Node* node = firstNode;
		for (int i = 0; i < index; i++)
		{
			node = node->nextNode;
		}
		return node->value;
	}

	void AddElementEnd(float value)
	{
		lastNode->nextNode = new Node;
		lastNode = lastNode->nextNode;
		lastNode->value = value;
		nodeNum++;
	}

	void AddElementBeginning(float value)
	{
		firstNode->prevNode = new Node;
		firstNode = firstNode->prevNode;
		firstNode->value = value;
		nodeNum++;
	}

	void AddElementIndex(float value, unsigned int index)
	{
		Node* node = firstNode;
		Node* newNode;
		for (int i = 0; i < index; i++)
		{
			node = node->nextNode;
		}
		newNode = node;
		newNode = new Node;
		newNode->prevNode->nextNode = node;
		newNode->nextNode->prevNode = node;
		newNode->value = value;
		nodeNum++;
	}

	void DeleteElementEnd()
	{
		lastNode = lastNode->prevNode;
		nodeNum--;
	}

	void DeleteElementBeginning()
	{
		firstNode = firstNode->nextNode;
		nodeNum--;
	}

	void DeleteElementIndex(unsigned int index)
	{
		Node* node = firstNode;
		for (int i = 0; i < index; i++)
		{
			node = node->nextNode;
		}
		node->prevNode->nextNode = node->nextNode;
		node->nextNode->prevNode = node->prevNode;
		nodeNum--;
	}

	void CleanUp()
	{
		Node* node = firstNode;
		Node* nodePtr;
		for (int i = 0; i < nodeNum; i++)
		{
			nodePtr = node;
			node = node->nextNode;
			delete nodePtr;
			
		}
		nodeNum = 0;
	}

	



};