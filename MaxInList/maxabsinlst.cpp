// #include <iostream>

// int lst[] = {-19, -3, 20, -1, 5, -25};

// // Function Prototypes
// int maxabsinlst(int* list, int size);

// int main() {
//     std::cout << "Hello world...\n";
//     int my_max = maxabsinlst(lst, 6);
//     std::cout << "Max is: " << my_max << std::endl;

// }
int maxabsinlst(int* list, int size) {
    if(size < 1) return 0;
    int max = list[0];
    for (int i = 1; i < size; i++)
    {
        if (abs(list[i]) > abs(max)) {
            max = list[i];
        }
    }
    return abs(max);
}