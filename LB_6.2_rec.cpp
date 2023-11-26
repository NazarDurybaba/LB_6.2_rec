#include <iostream>

using namespace std;

void create_array(int* arr, int n) {
    if (n > 0) {
        arr[n - 1] = n - 1;
        create_array(arr, n - 1);
    }
}

void print_array(int* arr, int n, int index = 0) {
    if (index < n) {
        cout << arr[index] << ' ';
        print_array(arr, n, index + 1);
    }
    else {
        cout << '\n';
    }
}

int count_odd(int* arr, int n, int index = 0, int count = 0) {
    if (index < n) {
        if (arr[index] % 2 != 0) {
            count++;
        }
        return count_odd(arr, n, index + 1, count);
    }
    else {
        return count;
    }
}

int main() {
    int n = 10;
    int* arr_rec = new int[n];
    create_array(arr_rec, n);
    print_array(arr_rec, n);
    cout << count_odd(arr_rec, n) << '\n';
    delete[] arr_rec;

    return 0;
}
