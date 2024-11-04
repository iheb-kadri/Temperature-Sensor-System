#include <iostream>
#include <limits> // For numeric limits

double averageTemp(double* arr, int size);
double maxTemp(double* arr, int size);
double minTemp(double* arr, int size);

int main() {
    int size;
    double* pTemp = NULL;
    std::cout << "Enter the number of elements: " << '\n';
    std::cin >> size;
    pTemp = new double[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter value of Temperature " << i + 1 << ": ";
        std::cin >> pTemp[i];
    }
    double averageTemperature = averageTemp(pTemp, size);
    std::cout << "Average Temperature = " << averageTemperature << '\n';
    double maxTemperature = maxTemp(pTemp, size);
    std::cout << "Maximum Temperature = " << maxTemperature << '\n';
    double minTemperature = minTemp(pTemp, size);
    std::cout << "Minimum Temperature = " << minTemperature << '\n';
    delete[] pTemp;
    return 0;
}

double averageTemp(double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

double maxTemp(double* arr, int size) {
    double max = std::numeric_limits<double>::lowest(); // Initialize with the lowest possible value
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

double minTemp(double* arr, int size) {
    double min = std::numeric_limits<double>::max(); // Initialize with the highest possible value
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}