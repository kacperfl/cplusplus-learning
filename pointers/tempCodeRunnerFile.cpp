 int *arr = new int[size];

    for(size_t i = 1; i < size; i++){
        *(arr + i) = i + 7;
    }

    int biggest_val = arr[0];

    for(size_t i = 1; i < size; i++){
        if (*(arr + i) > biggest_val){
            biggest_val = *(arr + i);
        }
    
    }