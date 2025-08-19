// Time Complexity : O(1)
// Space Complexity : O(n) where n is 1e6+1 here
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : Earlier I made a O(n) solution by
// iterating over an array for each operation but later optimized it to O(1)

// Your code here along with comments explaining your approach
#include <bits/stdc++.h>
using namespace std;
class MyHashSet {
public:
  vector<bool> vec;
  // Since for the given problem, the constraints are 10^6, we can declare a
  // fixed size vector of boolean of 1e6 + 1 length
  MyHashSet() { vec.resize(1e6 + 1, false); }

  // The declaration above makes each function an O(1) operation since we just
  // turn on/off the flag
  void add(int key) { vec[key] = true; }

  void remove(int key) { vec[key] = false; }

  bool contains(int key) { return vec[key]; }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
