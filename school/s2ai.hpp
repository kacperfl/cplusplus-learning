#pragma once
#include <string>
#include <vector>
#include <array>
#include <cstdint>
#include <ranges>
#include <iostream>


namespace S2AI {

    void pyramid_create(size_t pyramid_size, bool reverse);

    int first_difference(const std::string& left, const std::string& right);

    size_t count(int n, const std::vector<int>& number_list);

    float sequential_pairs_biggest_difference(const std::vector<float>& number_list);

    bool in_binary_language(const std::vector<int>& number_list);

    float average(const std::vector<float>& values);

    float average_of_lists(const std::vector<std::vector<float>>& list_of_lists);

    uint16_t fibonacci(uint16_t n);

    void fizzbuzz();

    template <class T>
    T add(const T& left, const T& right) {
        // Implement add here instead of in cpp. This is needed for the tests to work properly
        std::cout << left + right << std::endl;
        return left + right;
    }

    template<class T>
    T average(const std::vector<T>& v) {
        // Implement add here instead of in cpp. This is needed for the tests to work properly
        if(v.size() == 0) return T {0};

        T sum = 0;

        for(T value : v){sum += value;}

        T avg = sum / v.size();
        return avg;
    }

    int parsing();

    template<class T>
    T get_largest_element(T* arr, int size) {
        // Implement add here instead of in cpp. This is needed for the tests to work properly
        if(size == 0){
            throw std::invalid_argument("Array is leeg nu"); // als er geen size is
        }

        T biggest_value = arr[0];

        for(int i = 0; i < size; i++){
            if(arr[i] > biggest_value){biggest_value = arr[i];}
        }
        return biggest_value;

    }

    template<class T, size_t SIZE>
    T get_largest_element(const std::array<T, SIZE>& arr) {
        // Implement add here instead of in cpp. This is needed for the tests to work properly

        if(arr.size() == 0){
            throw std::invalid_argument("Array is leeg op dit moment"); // als er geen size is
        }

        T biggest_value = arr[0];

        for(size_t i = 0; i < arr.size(); i++){
            if(arr[i] > biggest_value){biggest_value = arr[i];}
        }
        return biggest_value;
    }



    void pointers_character_strings();
    void pointers_references();

}
