#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <set>

#define op(x) std::cout << #x <<"="<< x <<std::endl; 

#define map std::map
#define vector std::vector
#define stack std::stack
#define queue std::queue
#define set std::set




// for all permivtive types
template<typename ...T>
void vali(T& ...args){
 ((std::cin >> args),...);
}

template<typename ...T>
void valo(const T&... args) {
    ((std::cout << args << " "), ...);
}


// for vector
template<typename T>
void valo(const vector<T>container){
    std::cout <<"[";
    for(const auto& ele:container){
        std::cout<<ele<<" ";
    }
    std::cout <<"]"<<std::endl;
}

// for map
template<typename KeyType, typename ValueType>

void valo(const map<KeyType, ValueType>& m) {
    std::cout <<"["<<std::endl;
    for (const auto& pair : m) {
        std::cout << "{ "<< pair.first << ": " << pair.second <<" } "<< std::endl;
    }
    std::cout <<"]"<<std::endl;
}

// queue and heap
template<typename T>
void valo(const queue<T>& container) {
    queue<T> tempQueue = container;
    while (!tempQueue.empty()) {
        std::cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    std::cout << std::endl;
}

// set
template<typename T>
void valo(const set<T>& container) {
    for (const auto& element : container) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}


// linked list


// tree


// graphs 


