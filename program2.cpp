#include <iostream>

using namespace std;

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] * 2;
        } else {
            arr[i] = arr[i] + 1;
        }
    }
}

int main() {
    int numbers[] = {2, 5, 8, 3, 10};
    int size = 5;

    modifyArray(numbers, size);

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}


//Output : 

//4 6 16 4 20 
