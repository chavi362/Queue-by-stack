#pragma once

template <class T = int, int maxSize = 10>
class MyStack
{
	T arr[maxSize];
	int index = -1;

public:
	MyStack()
	{
	}
	void push(T val); // function to push a value onto the stack
	T pop(); // function to pop a value off the stack
	bool isEmpty() const // function to check if the stack is empty
	{
		return index == -1; // returns true if the index is -1 (i.e. the stack is empty)
	}
	T top()  const; // function to return the top element of the stack
};


template<class T, int maxSize>
inline void MyStack<T, maxSize>::push(T val)
{
	if (index < maxSize - 1)
	{
		arr[++index] = val; // add the value to the next available index in the array
	}
	else
		throw "the stack is full"; // throw an exception if the stack is already full
}

template<class T, int maxSize>
inline T MyStack<T, maxSize>::pop()
{
	if (isEmpty())
	{
		throw "the stack is empty"; // throw an exception if the stack is already empty
	}

	return arr[index--]; // return the value at the current index and decrement the index
}

template<class T, int maxSize>
inline T MyStack<T, maxSize>::top() const
{
	if (isEmpty())
	{
		throw "the stack is empty"; // throw an exception if the stack is already empty
	}

	return arr[index]; // return the value at the current index
}
