// #include <iostream>

// int lst[] = {-19, -3, 20, -1, 5, -25};

// Function Prototypes
// int maxinlst(int list[], size_t size);

// int main() {
//     std::cout << "Hello world...\n";
//     int my_max = maxinlst(lst, 6);
//     std::cout << "Max is: " << my_max << std::endl;

// }

int maxinlst(int* list, int size) {
    if(size < 1) return 0;
    int max = list[0];
    for (int i = 1; i < size; i++)
    {
        if (list[i] > max) {
            max = list[i];
        }
    }
    return max;
}