//Calculate prime numbers from 2 to integer defined in variable limit.
#include "../std_lib_facilities.h"

int main() {
    vector<int> prime = {2};
    int limit = 20;
    double j;

    for (int i = 3; i <= limit; ++i) { //Start at 3 as 2 is thr first prime #
        for (int k = 2; k <= i; ++k) {
            j = double(i) / k;
            if (j == 1)
                prime.push_back(i);
            else if ( 0 == i % k)
                break;
        }
    }
    for (int x : prime)
        cout << x << endl;
    return 0;
}