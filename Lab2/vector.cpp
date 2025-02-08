#include <iostream>
#include <vector>

using namespace std;

void printMemVec(vector<int> &v, int size) {
    printf("Array - Each int is worth %lu bytes\n", sizeof(v[0]));

    for (int i = 0; i < size; i++) {
        printf("Value: %i at Memory Location: %p\n", v[i], v.data() + i);
    }
}

void incVecBy10(vector<int> &v, int size) {
    for (int i = 0; i < size; i++) {
        v[i] += 10;
    }
    
}


int main() {
    const int SIZE = 5;
    vector<int> vector1(SIZE);

    for (int i =0; i < SIZE; i++) {
        vector1[i] = 100 + i;
    }

    printf("Before------------\n");
    printMemVec(vector1,SIZE);
    incVecBy10(vector1,SIZE);
    printf("After------------\n");
    printMemVec(vector1,SIZE);
    return 0;
}
