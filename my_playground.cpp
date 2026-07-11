#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int nhapSoTrongKhoang(int minVal, int maxVal, const string& prompt) {
    int n;
    while (true) {
        cout << prompt;
        if (cin >> n && n >= minVal && n <= maxVal) {
            return n;
        }
        cerr << "Nhap sai. Hay nhap so tu " << minVal << " den " << maxVal << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void nhapVector(vector<int>& v, int n) {
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cout << "Phan tu " << i + 1 << ": ";
        cin >> v[i];
    }
}

void inVector(const vector<int>& v) {
    for (int x : v) {
        cout << x << ' ';
    }
    cout << '\n';
}

int timMax(const vector<int>& v) {
    return *max_element(v.begin(), v.end());
}

int main() {
    int n = nhapSoTrongKhoang(1, 9, "Nhap mot so tu 1 den 9: ");

    vector<int> v;
    nhapVector(v, n);
    inVector(v);
    cout << "Max la " << timMax(v) << '\n';

    return 0;
}
