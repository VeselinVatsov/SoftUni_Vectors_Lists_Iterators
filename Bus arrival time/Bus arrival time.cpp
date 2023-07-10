#include<vector>
#include <iostream>

using namespace std;

int main()
{
    unsigned buses, trainDeparture;
    vector<int> busArrivals;

    cin >> buses;
    busArrivals.resize(buses);
    for (int i = 0; i < buses; i++)
    {
        cin >> busArrivals[i];
    }

    cin >> trainDeparture;

    int k = trainDeparture % 100;

    trainDeparture -=


}
