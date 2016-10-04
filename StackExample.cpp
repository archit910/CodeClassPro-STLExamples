// SOURCE http://www.cplusplus.com/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
/***pre processors ***/
using namespace std;
/*
LIFO stack
Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container.

stacks are implemented as containers adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.

The underlying container may be any of the standard container class templates or some other specifically designed container class. The container shall support the following operations:
empty
size
back
push_back
pop_back

The standard container classes vector, deque and list fulfill these requirements. By default, if no container class is specified for a particular stack class instantiation, the standard container deque is used.
*/
int main()
{	
	stack <int > myStack ;
	
	cout <<"Size of the stack is " << myStack.size() << endl;
	for(int i = 0 ; i < 5 ;i++)
	{
		int element;
		cin >> element;
		myStack.push(element);
	}
	cout << "TOP ELEMENT IS " << myStack.top() << endl;
	myStack.pop();
	cout << "Size of the stack is " << myStack.size() << endl;


}
