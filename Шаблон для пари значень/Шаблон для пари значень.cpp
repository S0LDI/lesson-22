#include <iostream>
#include <string>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(const T1& val1, const T2& val2) : first(val1), second(val2) {}

    // Методи доступу до значень пари
    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }
};

int main() {
    Pair<int, double> pair1(5, 3.14);
    Pair<std::string, bool> pair2("Hello", true);

    int firstValue = pair1.getFirst();
    double secondValue = pair1.getSecond();

    std::string stringValue = pair2.getFirst();
    bool boolValue = pair2.getSecond();

    std::cout << "Pair 1: " << firstValue << ", " << secondValue << std::endl;
    std::cout << "Pair 2: " << stringValue << ", " << boolValue << std::endl;

    return 0;
}
