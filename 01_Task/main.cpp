#include <iostream>
#include <vector>


std::vector<int> remove(std:: vector<int> vec, int x) {

    for (int i = 0; i < vec.size();) {
        if (vec[i] == x) {
            int index = i;
            for (int j = index + 1; j < vec.size(); j++) {
                vec[j - 1] = vec[j];
            }
            vec.pop_back();
        } else {
            i++;
        }

    }

    return vec;

}

int main() {
    std::cout << "===01_Task===" << std::endl;

    std::cout << "Input vector size:";
    int size, x;
    std::cin >> size;

    std::vector<int> my_vector(size);

    std::cout << "Input numbers:";

    for (int i = 0; i < size; i++) {
        std::cin >> my_vector[i];
    }

    std::cout << "Input number to delete:";
    std::cin >> x;

    my_vector = remove(my_vector, x);

    std::cout << "Result:";

    for (int i : my_vector) {
        std::cout << i << " ";
    }

}