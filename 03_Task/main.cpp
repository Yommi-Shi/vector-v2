#include <iostream>
#include <vector>


int main() {
    std::cout << "===03_Task===" << std::endl;

    std::vector<int> db(20);

    int num = 0;
    int index = 0;

    while (num != -2) {
        std::cout << "input number:";
        std::cin >> num;
        if (num == -1) {
            std::cout << "output:";
            for (int i = index; i < db.size(); i++) {
                std::cout << db[i] << " ";
            }
            for (int i = 0; i < index; i++) {
                std::cout << db[i] << " ";
            }
            std::cout << "\n";
        } else {
            db[index] = num;
            index++;
            if (index == 20) {
                index = 0;
            }
        }
    }

}