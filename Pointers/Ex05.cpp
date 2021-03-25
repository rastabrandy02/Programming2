#include <iostream>
using namespace std;
#define MAX_LENGHT 20

int SizeWord(char* word);
void Concatenation(char* word1, char* word2, char* result);
void PrintWord(char* myWord);



int main()
{
	char w1[MAX_LENGHT] = { 0 };
	char w2[MAX_LENGHT] = { 0 };
	char* word1 =  0;
	char* word2 =  0;
	int size1 = 0;
	int size2 = 0;
	int totalSize = 0;
	

	cout << "Introduce the first word: ";
	cin >> w1;
	word1 = w1;
	cout << "Introduce the second word: ";
	cin >> w2;
	word2 = w2;

	size1 = SizeWord(word1);
	size2 = SizeWord(word2);
	totalSize = size1 + size2 + 1;

	char* newWord = (char*)malloc(totalSize * sizeof(char));
	Concatenation(word1, word2, newWord);

	
	PrintWord(newWord);

	free(newWord);
	newWord = nullptr;
	return 0;
}

int SizeWord(char* word)
{
	int size = 0;
	
	for (int i = 0; word[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}
void Concatenation(char* word1, char* word2, char* result)
{
	int pos1 = 0;
	int pos2 = 0;
	for (int i = 0; word1[i] != '\0'; i++)
	{
		result[i] = word1[i];
		pos1++;
	}
	
	for (int i = 0; word2[i] != '\0'; i++)
	{
		result[pos1 + i] = word2[i];
		pos2++;
		
	}
	result[pos1 + pos2] = '\0';
}
void PrintWord(char* myWord)
{
	for (int i = 0; myWord[i] != '\0'; i++)
	{
		cout << myWord[i];
	}
}