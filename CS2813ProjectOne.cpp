// Coding Assignment 1 - C++ Template

#include <iostream>
#include <vector>
#include <functional>
using namespace std;

vector<int> domain = {-2, -1, 0, 1, 2, 3};

// Predicates
bool P(int x) {
    // P(x): x is even
    return x % 2 == 0;
}

bool Q(int x) {
    // Q(x): x > 0
    return x > 0;
}

// Logical operators
bool NOT(bool a) { return !a; }
bool AND(bool a, bool b) { return a && b; }
bool OR(bool a, bool b) { return a || b; }

// Quantifiers
bool forall(const vector<int>& domain, function<bool(int)> predicate) {
    // Return true iff predicate(x) is true for every x in domain.
    for (int x : domain) {
        if (!predicate(x)) return false;
    }
    return true;
}

bool exists(const vector<int>& domain, function<bool(int)> predicate) {
    // Return true iff predicate(x) is true for at least one x in domain.
    for (int x : domain) {
        if (predicate(x)) return true;
    }
    return false;
}

int main() {
    bool s1 = forall(domain, [](int x) { return OR(P(x), Q(x)); });
    bool s2 = exists(domain, [](int x) { return AND(P(x), NOT(Q(x))); });

    cout << "FORALL x (P(x) OR Q(x)) = " << (s1 ? "True" : "False") << endl;
    cout << "EXISTS x (P(x) AND NOT Q(x)) = " << (s2 ? "True" : "False") << endl;

    // Expected output:
    // FORALL x (P(x) OR Q(x)) = False
    // EXISTS x (P(x) AND NOT Q(x)) = True

    return 0;
}