#include <iostream>
using namespace std;
int main()
{
    int wires = 0, shots = 0, wire = 0, bird = 0;
    cin >> wires;
    int* arr = new int[wires+2];
    arr[0] = 0;
    arr[wires+1] = 0;
    for (int i = 1; i <= wires; i++) {
        cin >> arr[i];
    }
    cin >> shots;
    while (shots--) {
        cin >> wire >> bird;
        arr[wire - 1] += (bird - 1);
        arr[wire+1] += (arr[wire] - bird);
        arr[wire] = 0;
 
    }
    for (int i = 1; i <= wires; i++) {
        cout << arr[i] << endl;
    }
 
}