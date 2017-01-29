#pragma once
#define CAPACITY 128
typedef int QueueElement;

class Queue
{
	QueueElement queueArray[CAPACITY];
	int front;
	int back;
	int size;
public:
	Queue();
	bool empty();
	bool full();
	void enqueue(QueueElement item);
	QueueElement dequeue();
	void display();
};
