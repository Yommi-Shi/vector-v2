#include <iostream>
#include <vector>


int main() {
    std::cout << "===03_Task===" << std::endl;

    std::vector<int> db(20);

    int n, index = 0;
    while (n != -2) {
        std::cout << "input number:";
        std::cin >> n;

        if (n == -1) {
            for (int i : db) {
                std::cout << i << " ";
            }
            std::cout << std::endl;
        } else {
            for (int i = 1; i < db.size(); i++) {
                db[i - 1] = db[i];
            }
            db[db.size() - 1] = n;
        }

    }

}