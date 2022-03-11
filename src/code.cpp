#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    return (left - right) * (left - right) ;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    return mask >= 0 && bit_pos >= 0 && bool((1 << bit_pos) & mask);
  }

  // Task 3
  int max3(int left, int middle, int right) {

    return (left > middle ? (left > right ? left : right) : (middle > right ? middle : right));
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left != nullptr && right != nullptr) {
      int x = *left;
      *left = *right;
      *right = x;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (arr != nullptr && length > 0) {
      int sum = 0;
      for (int i = 0; i < length; i++) {
        sum += arr[i];
      }
      return sum;

    } else {
      return 0;
    }
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    if (arr != nullptr && length > 0) {
      int *max = arr;
      for (int i = 0; i < length; i++) {
        if (arr[i] > *max) {
          *max = arr[i];
        }
      }
      return max;

    } else {
      return nullptr;
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length > 0) {
      int *arr = new int[length];
      std::fill(arr, arr + length, init_value);
      return arr;

    } else {
      return nullptr;
    }
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if (arr_in != nullptr && length > 0) {
      int *new_arr = new int[length];
      std::copy(arr_in, arr_in + length, new_arr);
      return new_arr;

    } else {
      return nullptr;
    }
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    } else if (length <= 0) {
      os << "Invalid argument: length\n";
    } else if (k <= 0) {
      os << "Invalid argument: k\n";
    } else {
      for (int i = 0; i < length; i += k) {
        os << arr[i] << "\t";
      }
    }
  }

}  // namespace assignment
