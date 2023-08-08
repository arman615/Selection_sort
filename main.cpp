#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& vec) {
    int n = vec.size();
    
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; ++j) {
            if (vec[j] < vec[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(vec[i], vec[minIndex]);
        }
    }
}

int main() {
    std::vector<int> vec = {2, 8, 5, 3, 9, 4, 1};  
    selectionSort(vec);
    std::cout << "Sorted vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
