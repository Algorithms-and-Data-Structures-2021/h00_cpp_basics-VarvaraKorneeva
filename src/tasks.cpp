#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if ((lhs) && (rhs))
    {
        int c = *lhs;
        *lhs = *rhs;
        *rhs = c;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if ((typeid(num_rows) == typeid(int)) && (typeid(num_cols) == typeid(int))) {
        int **arr = new int *[num_rows]{};
        for (int i = 0; i < num_rows; ++i) {
            arr[i] = new int[num_cols]{init_value};
        }
        return arr;
    }
    return nullptr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if((typeid(num_rows) == typeid(int)) && (num_rows > 0) && (typeid(num_cols) == typeid(int)) && (num_cols > 0)){
        for(int i = 0; i < num_rows; i++) {
            for(int j = 0; j < num_cols; j++){
                arr_2d_target[i][j] = arr_2d_source[i][j];
            }
        }
        return true;
    }
    else{
        if ((!arr_2d_source) || (!arr_2d_target)){
            return false;
        }
        return false;
    }
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n / 2; i++){
        int c = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = c;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if((arr_begin) && (arr_end)){
        int *b = arr_begin;
        int *e = arr_end;
        int count = 0;
        while(b != arr_end){
            count += 1;
            b += 1;
        }
        b = arr_begin;
        for(int i = 1; i < count / 2; i++){
            int c = *b;
            *b = *e;
            *e = c;
            b = arr_begin + i;
            e = arr_end - i;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if((arr) && (size > 0)){
        int max = 0;
        for(int i = 0; i < size; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        int *pointer_max = &max;
        return pointer_max;
    }
    else{
        return nullptr;
    }
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    if(!arr.empty()){
        vector<int> arr_odd;
        for(int i = 0; i < arr.size(); i++){
            if((arr[i] % 2) != 0){
                arr_odd.push_back(arr[i]);
            }
        }
        return arr_odd;
    }
    return {};
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    // напишите код здесь ...
    if((!arr_a.empty()) && (!arr_b.empty())){
        vector<int> arr_common;
        for(int i = 0; i < arr_a.size(); i++){
            for(int j = 0; j < arr_b.size(); j ++){
                if(arr_a[i] == arr_b[j]){
                    arr_common.push_back(arr_a[i]);
                }
            }
        }
        return arr_common;
    }
    return {};
}
