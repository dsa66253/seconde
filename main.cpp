#include <iostream>

using namespace std;

int main(){
    cout << "hello\n";
    int sum = 0;
    for (int i = 0; i<11; i++){
        sum = sum + i;
    }
    cout << "sum:" << sum << endl;
    return 0;
}
