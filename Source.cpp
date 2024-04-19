/*סדנה בc++
* תרגיל בית 8 שאלה 2
* חוה חיימסון 325460871 ורבקה פרידמן326135548
* The program implements a queue data structure using stack, (and another help stuck in some functions). 
* THe main program uses this queue
*/
#include <iostream>
#include "QueueStack.h"
using namespace std;
int main() {
	Queue* Q; // declare a pointer to the Queue class
	int num;
	Q = new QueueStack(); // create a new QueueStack object and assign its address to the Q pointer
	cout << "enter 5 numbers: " << endl;
	try {
		for (int i = 0; i < 5; i++) {
			cin >> num;
			Q->enqueue(num); // enqueue the input value onto the Queue
		}
	}
	catch (const char* msg)
	{
		cout << msg; // print the error message if an exception is thrown
	}
	cout << "first in queue is: " << Q->front() << endl;
	cout << "removing first 2 elements:" << endl;
	cout << Q->dequeue() << ' ';
	cout << Q->dequeue() << endl;
	try
	{
		cout << "first in queue is: " << Q->front() << endl;
	}
	catch (const char* msg)
	{
		cout << msg;
	}
	try
	{
		Q->enqueue(8);
	}
	catch (const char* msg)
	{
		cout << msg;
	}
	try
	{
		Q->enqueue(9);
	}
	catch (const char* msg)
	{
		cout << msg;
	}
	cout << "emptying out the queue: " << Q->front() << endl;
	while (!Q->isEmpty())
		cout << Q->dequeue() << " ";
	cout << endl;
	return 0;
}

/*
enter 5 numbers:
2 4 5 6 7
first in queue is: 2
removing first 2 elements:
2 4
first in queue is: 5
emptying out the queue: 5
5 6 7 8 9
*/