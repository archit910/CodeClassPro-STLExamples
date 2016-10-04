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
	Sets are containers that store unique elements following a specific order.

In a set, the value of an element also identifies it (the value is itself the key,
 of type T), and each value must be unique. The value of the elements in a set cannot be modified 
 once in the container (the elements are always const), but they can be inserted or removed from the container.

Internally, the elements in a set are always sorted following a specific strict weak ordering criterion 
indicated by its internal comparison object (of type Compare).

set containers are generally slower than unordered_set containers to access individual elements 
by their key, but they allow the direct iteration on subsets based on their order.

Sets are typically implemented as binary search trees.
*/
int main()
{
	
	set < int > :: iterator it;
	// WAP to find number of unique elements 
	int ar[101010];
	cout <<" enter number of elements";
	int n;
	cin >> n;
	for(int i =0 ; i < n ; ++i )
	{
		cin >> ar[i];
	}
	set < int > mySet(ar, ar+n) ;
	cout <<"Number of unique elements are " << mySet.size() << endl;
	cout <<"elements are :- \n";
	for(it = mySet.begin(); it != mySet.end() ; it++)
	{
		cout << * (it ) << endl;
	} 

// WAP TO FIND NUMBER OF DIVISORS OF AN ELEMENT


return 0;


	
}