/*
ID: dragosz1
LANG: C++
TASK: ride
*/
#include <fstream>
using namespace std;

const int MOD = 47;

int calc(const string& s) {
    int nr = 1;
    for (int i = 0; i < s.size(); i++)
        nr = 1LL * (s[i] - 'A' + 1) * nr % MOD;
    return nr;
}

int main() {
    ifstream f("ride.in");
    string s1, s2;
    f >> s1 >> s2;
    f.close();
    int nr1 = calc(s1);
    int nr2 = calc(s2);
    ofstream g("ride.out");
    g << (nr1 == nr2 ? "GO" : "STAY") << '\n';
    g.close();
    return 0;
}