#pragma once
#include "Lib.h"
#include "FwdList.h"
template<typename T>
class FwdList
{
public:

	void pushFront(const T& data);
	void popSomeElement(const size_t& data);
	void print();

private:
	struct Node
	{
		T data;
		Node* next;
		Node* last;
		Node(const T& data, Node* next = nullptr)
			:data(data), next(next)
		{}
	};
	Node* head = nullptr;
	Node* tail = nullptr;
};

template<typename T>
inline void FwdList<T>::pushFront(const T& data)
{
	Node* temp = new Node(data, nullptr, head);
	if (isEmpty())
	{
		tail = temp;
	}
	else
	{
		head->prev = temp;
	}
	++size;
	head = temp;
}

template<typename T>
inline void FwdList<T>::popSomeElement(const size_t& data)
{
	Node* find = findNode(data);
	if (find != nullptr)
	{
		if (find == head) {
			popFront();
		}
		else if (find == tail) {
			popBack();
		}
		else if (find->next != nullptr)
		{
			find->prev->next = find->next;
			find->next->prev = find->prev;
			delete find;
		}
		--size;


	}
}

template<typename T>
inline void FwdList<T>::print()
{
	Node* temp = head;
	while (temp != nullptr)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
	cout << endl;
}
