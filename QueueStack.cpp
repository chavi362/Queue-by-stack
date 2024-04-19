#include "QueueStack.h"

void QueueStack::clear()
{
	delete data; // delete the MyStack object pointed to by the data pointer
}

int QueueStack::dequeue()
{
	MyStack<int> data1; // create a new MyStack object
	if (this->data->isEmpty())
		throw "Error"; // throw an exception if the queue is already empty
	while (!this->data->isEmpty())
	{
		data1.push(this->data->pop()); // pop all the values from the original MyStack object and push them onto the new MyStack object
	}
	int front = data1.pop(); // pop the front value from the new MyStack object
	while (!data1.isEmpty())
	{
		data->push(data1.pop()); // pop all the values from the new MyStack object and push them onto the original MyStack object
	}
	return front; // return the front value
}

void QueueStack::enqueue(int value)
{
	data->push(value); // push the value onto the MyStack object
}

int QueueStack::front()
{
	MyStack<int> data1; // create a new MyStack object
	if (this->data->isEmpty())
		throw "Error"; // throw an exception if the queue is already empty
	while (!this->data->isEmpty())
	{
		data1.push(this->data->pop()); // pop all the values from the original MyStack object and push them onto the new MyStack object
	}
	int front = data1.pop(); // pop the front value from the new MyStack object
	data->push(front); // push the front value back onto the original MyStack object
	while (!data1.isEmpty())
	{
		data->push(data1.pop()); // pop all the values from the new MyStack object and push them onto the original MyStack object
	}
	return front; // return the front value
}

bool QueueStack::isEmpty() const
{
	return this->data->isEmpty(); // return true if the MyStack object is empty
}