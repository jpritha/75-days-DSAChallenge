#include<bits/stdc++.h>
using namespace std;

class RandomizedSet {
private:
    vector<int> a;
    unordered_map<int,int> mp;

public:
    RandomizedSet(){

    }

    bool insert(int val){
        //if val is already present in map
        if(mp.find(val) != mp.end()){
            return false;
        }
        else{
            a.push_back(val);
            
            mp[val] = a.size() - 1;        //key stores the index of val as its value
                                          //key = array element & value = array element index
            return true;
        }
    }

    bool remove(int val){
        //if val is not already present in map
        if(mp.find(val) == mp.end()){
            return false;
        }
        else{
            int last = a.back();        // back() fetches last element of the array vector
            
            a[mp[val]] = last;          // mp[val] locates the index of val in the array vector.
				                        // Then we copy array last element value to the val location in the array
            
            a.pop_back();               // Delete the last element of the array 
            
            mp[last] = mp[val];         // In hashmap, assign index of val in array to the index of the last element
            
            mp.erase(val);              // Delete the val entry from map
            
            return true;
        }
    }

    int getRandom(){
    /*
    ->rand() function gives random value in the range of 0 to RAND_MAX(whose value is 32767). 
    ->x%y gives remainder when x is divided by y and this remainder is in the range of 0 to 
      y-1.
    ->rand()%a.size() gives random value in the range of (0 to a.size()-1).
    ->a[rand()%a.size()] will give random value of array in the range of a[0] to a[a.size()-1].  
    */

        return a[rand() % a.size()];
    }

    void print(){
        for(auto it: a){
            cout<<it<<" ";
        }
    }
};

int main(){
    int val;
    cin>>val;

    RandomizedSet * ob = new RandomizedSet();
    bool param1 = ob->insert(val);
    bool param2 = ob->remove(val);
    int param3 = ob->getRandom();

    ob->print();

    return 0;
}