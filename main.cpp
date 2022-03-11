#include <iostream>

#include "assignment/code.hpp"

using namespace std;
using namespace assignment;

int main() {
  cout << squared_diff(2, 5) << "\n";

  cout << boolalpha << check_bit(66, 5) << "\n";
  cout << boolalpha << check_bit(66, 6) << "\n";

  cout << max3(1, 1, -1) << "\n";

  int left = 4;
  int *right = nullptr;
  swap_args(&left, right);
  cout << "left = " << left << ", right = " << right << "\n";

  int left1 = 4;
  int right1 = 6;
  swap_args(&left1, &right1);
  cout << "left1 = " << left1 << ", right1 = " << right1 << "\n";

  int arr[5]{1, 2, 3, 4, 5};
  cout << arr_sum(arr, 5) << "\n";

  cout << find_max_elem(arr, 5) << " -> " << *find_max_elem(arr, 5) << "\n";

  int *arr1 = allocate_arr(4, 3);
  for (int i = 0; i < 4; i++) {
    cout << arr1[i] << " ";
  }
  cout << "\n";

  cout << *clone_arr(arr, 5);

  print_kth_elements(arr, 5, 2);



}