#include <iostream>

int main() {
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = rand();
    }

    int sum = 0;
    int mult = 1;
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << ", ";
        sum += arr[i];
        mult *= arr[i];
    }

    printf("\nsum - %d\nmult - %d", sum, mult);
    return 0;
}