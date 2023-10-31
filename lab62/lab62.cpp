#include <iostream>

// Функція для обчислення суми індексів максимального та мінімального елементів
int calculateSumMinMaxIndices(int arr[], int n, int& minIndex, int& maxIndex, int currentIndex) {
    if (currentIndex == n) {
        return 0;
    }

    int sum = calculateSumMinMaxIndices(arr, n, minIndex, maxIndex, currentIndex + 1);

    if (arr[currentIndex] < arr[minIndex]) {
        minIndex = currentIndex;
    }
    if (arr[currentIndex] > arr[maxIndex]) {
        maxIndex = currentIndex;
    }

    return sum + currentIndex;
}

int main() {
    int n;

    std::cout << "size: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "a few number" << std::endl;
        return 1;
    }

    int* arr = new int[n];

    std::cout << "+ " << n << "+ : ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int minIndex = 0;
    int maxIndex = 0;

    // Ініціалізуємо мінімальний та максимальний індекс першим елементом
    int sum = calculateSumMinMaxIndices(arr, n, minIndex, maxIndex, 0);

    std::cout << "masyw: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "sum min and max index: " << sum << std::endl;
    std::cout << "min: " << minIndex << std::endl;
    std::cout << "max: " << maxIndex << std::endl;

    delete[] arr;

    return 0;
}
