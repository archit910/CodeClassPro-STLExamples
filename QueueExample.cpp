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
/**
  queues are a type of container adaptor, specifically designed to operate in a FIFO context
  (first-in first-out), where elements are inserted into one end of the container and extracted from the other.

  queues are implemented as containers adaptors,
  which are classes that use an encapsulated object
  of a specific container class as its underlying container, providing a specific set of member
  functions to access its elements. Elements are pushed into the "back" of the specific container and popped from its "front".

The underlying container may be one of the standard container class template or some other 
specifically designed container class. This underlying container shall support at least the following operations:
empty
size
front
back
push_back
pop_front

**/ 
int main()
{
  std::queue<int> myqueue;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

  do {
    std::cin >> myint;
    myqueue.push (myint);
  } while (myint);

  std::cout << "myqueue contains: ";
  while (!myqueue.empty())
  {
    std::cout << ' ' << myqueue.front();
    myqueue.pop();
  }
  std::cout << '\n';
}
