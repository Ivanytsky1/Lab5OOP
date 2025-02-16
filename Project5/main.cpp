#include <iostream>
using namespace std;

// Загальний шаблон для числових типів
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Спеціалізація шаблонної функції для char
template <>
char add<char>(char a, char b) {
    return a - b;  
}

int main() {
    // Додавання int
    int intResult = add(5, 10);
    cout << "Sum of ints: " << intResult << endl;

    // Додавання float
    float floatResult = add(3.5f, 2.5f);
    cout << "Sum of floats: " << floatResult << endl;

    // Додавання char 
    char charResult = add('A', 'B');  
    cout << "Sum of chars (as numbers): " << int(charResult) << endl;

    return 0;
}
