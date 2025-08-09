#include <iostream>
#include <vector>


int main() {
    std::cout << "===02_Task===" << std::endl;

    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};

    std::vector<int> items {1, 1, 0, 3};

    float sum = 0;

    for (int i = 0; i < items.size(); i++) {
        sum += prices[items[i]];
    }

    std::cout << "The total cost will be equal to " << sum << std::endl;
}