#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int val = 0) : value(val) {}

    Counter& operator++() {
        value++;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() const {
        cout << "Value: " << value << "\n";
    }
};

int main() {
    Counter c(5);
    c.display();
    ++c;
    c.display();
    c++;
    c.display();
    return 0;
}
