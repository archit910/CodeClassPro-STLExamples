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
	Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.
*/
int main()
{
	map< char , int > mtp;
	string name;
	cin >> name;
	int le  = name.size();
	for(int i  =  0 ; i < le ; i++)
	{
		mtp[name[i]] ++;
	}
	map< char , int> :: iterator it;
	for(it = mtp.begin() ; it!= mtp.end() ; it++)
	{
		cout << it -> first << " " << it -> second << endl;
	}
}