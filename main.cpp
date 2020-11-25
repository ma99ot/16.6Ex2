#include <iostream>
#include <vector>

float calculateCost (std::vector<float> price, std::vector<int> list) {
    float cost = 0;
    for (int i = 0; i < list.size(); i++) {
        if (list[i] < 0 || list[i] >= price.size()) {
            std::cerr << "\n Value " << list[i] << " out of range!!!" << std::endl;
        } else {
            cost += price[list[i]];
        }

    }
    return cost;
}

int main() {
    std::vector<float> prices = {2.5, 4., 25., 3.0, 10.0};
    std::vector<int> shoppingList = {1, 1, 0, 3};
    std::cout << "The total cost is " << calculateCost(prices, shoppingList);
    return 0;
}
