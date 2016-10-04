// SOURCE http://www.cplusplus.com/reference/vector/vector/vector/
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
Vectors are sequence containers representing arrays that can change in size.

Just like arrays, vectors use contiguous storage locations for their elements, 
which means that their elements can also be accessed using offsets on regular pointers to its elements, 
and just as efficiently as in arrays. But unlike arrays, their size can change dynamically, with their storage
 being handled automatically by the container.

Internally, vectors use a dynamically allocated array to store their elements. 
This array may need to be reallocated in order to grow in size when new elements are inserted, which implies allocating a new array and moving all elements to it. This is a relatively expensive task in terms of processing time, and thus, vectors do not reallocate each time an element is added to the container.

Instead, vector containers may allocate some extra storage to 
accommodate for possible growth, and thus the container may have an actual capacity 
greater than the storage strictly needed to contain its elements (i.e., its size).
 Libraries can implement different strategies for growth to balance between memory usage and reallocations, 
 but in any case, reallocations should only happen at logarithmically growing intervals of size so that the insertion of individual
  elements at the end of the vector can be provided with amortized constant time complexity (see push_back).

Therefore, compared to arrays, vectors consume more memory in exchange for
 the ability to manage storage and grow dynamically in an efficient way.

Compared to the other dynamic sequence containers (deques, lists and forward_lists),
 vectors are very efficient accessing its elements (just like arrays) and relatively 
 efficient adding or removing elements from its end. For operations that involve inserting or 
 removing elements at positions other than the end, they perform worse than the others, and have 
 less consistent iterators and references than lists and forward_lists.
*/
int main()
{
     // constructors used in the same order as described above:
    vector < int > v;
   
    int n;
    cin >> n;
    for(int i = 0 ; i < n ;i++)
    {
        int element;
        cin >> element;
        v.push_back(element) ; // inserts into vector v
    }

     vector < int > v2(v.begin(), v.end());
     vector < int > :: iterator it;
     for(it = v.begin(); it != v.end() ; it++)
     {
        cout << *it << endl;
     }
     // erase the 6th element
     v.erase (v.begin()+5); 

     // ITERATE THROUGH V to check erase function
     cout <<"V2 is here \n";
      for(it = v2.begin(); it != v2.end() ; it++)
     {
        cout << *it << endl;
     }
      // erase the first 3 elements:
     v2.erase (v2.begin(),v2.begin()+3);
     cout <<"After Erase\n";
       for(it = v2.begin(); it != v2.end() ; it++)
     {
        cout << *it << endl;
     }




  return 0;
}
