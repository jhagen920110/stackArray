#include "stdafx.h"
#include "stack.h"
#include <iostream>
using namespace std;
#define CAPACITY 5
typedef int QueueElement;

Queue::Queue()
{
	QueueElement queueArray[CAPACITY];
	front = 0;
	back = 0;
	size = 0;
}
bool Queue::empty()
{
	if (size == 0)
		return true;
	else return false;
}
bool Queue::full()
{
	if (size >= CAPACITY)
		return true;
	else return false;
}
void Queue::enqueue(QueueElement item)
{
	if (!full())
	{
		queueArray[back%CAPACITY] = item;
		back++;
		size++;
	}
	else
		cout << "The Queue is Full!\n";
}
QueueElement Queue::dequeue()
{
	if (!empty())
	{
		QueueElement i = queueArray[front%CAPACITY];
		front++;
		size--;
		return i;
	}
	else
	{
		cout << " The Queue is empty!\n";
		return 0;
	}
}
void Queue::display()
{
	if (empty())
		cout << "Queue is empty.\n";
	else
	{
		for (int i = front; i<back; i++)
			cout << queueArray[i] << " ";
	}
	cout << "\n";
}
