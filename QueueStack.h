#pragma once
#include "Queue.h"
#include "MyStack.h"
class QueueStack : public Queue // inherit from the Queue class
{
protected:
	MyStack<int>* data; // pointer to an object of MyStack<int> class
public:
	QueueStack()
	{
		// constructor
		this->data = new MyStack<int>(); // create a new object of MyStack<int> class and assign its address to the data pointer
	}
	void clear() override; // override the clear function of the Queue class
	int dequeue() override; // override the dequeue function of the Queue class
	void enqueue(int value) override; // override the enqueue function of the Queue class
	int front() override; // override the front function of the Queue class
	bool isEmpty() const override; // override the isEmpty function of the Queue class
};