#include <iostream>
#include <vector>

using namespace std;

void processVector(vector<int>& vec) {
    vec.push_back(50);
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] > 20) {
            vec[i] -= 10;
        }
    }
}

int main() {
    vector<int> data = {10, 25, 30};

    data.push_back(15);
    processVector(data);

    for (int val : data) {
        cout << val << "-";
    }
    cout << endl;

    return 0;
}

//Output: 10-15-20-15-40-

//What is size_t in the standard loop?
//The Logic: In the loop for (size_t i = 0; i < vec.size(); i++), size_t is used as the data type for the counter i.
//Why it matters: vec.size() returns an unsigned integer (a type that cannot hold negative numbers) because a collection cannot have a negative size. 
//size_t is C++'s dedicated unsigned type for sizes and index counting. 
//Matching i as a size_t prevents compilation warnings about comparing signed integers (int) with unsigned integers.
//How does for (int val : data) work behind the scenes?The Concept: This is a range-based for loop. It eliminates the need to manage indices like i or manually fetch elements with data[i].
//The Mechanism: C++ automatically looks at the start of the data vector. On the first iteration, it reads the first element (10), copies it into your temporary variable val, and runs the loop body. 
//On the next iteration, it automatically moves to the next memory slot, copies the next element into val, and repeats this sequence until it detects the end of the vector. 
//It performs the exact same sequential access as a traditional loop but hides the tracking math.
