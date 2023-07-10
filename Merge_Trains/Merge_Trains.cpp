/*At a certain train station, trains arrive on two tracks – 
Track A and Track B – and are merged onto a single track. 
Each railcar has a number, and in each train, the railcars are ordered by number – the 
front railcar has the lowest number, the back railcar has the highest number.

Given the railcar numbers on Track A and Track B, 
given from the back car to the front car, print the order in which railcars from 
Track A and Track B should be merged into the single track, then print the new train configuration, 
starting from the last railcar and finishing at the first railcar. Railcars are moved to start from 
the front to the back (i.e. you can only move the front car of a train). 
Each time you move a railcar from the parallel tracks A and B to the merge track, 
it pushes forward any railcars that are already there.
*/

#include <iostream>
#include <sstream>
#include <list>

using namespace std;

void readTrack(list<int>& track)
{
    string buf;
    getline(cin, buf);

    istringstream sbuf(buf);
    int car;

    while (sbuf >> car)
    {
        track.push_front(car);
    }
}

void printTrack(const list<int>& track)
{
    for (int car : track)
    {
        cout << car << " ";
    }
}

int main()
{
    list<int> trackA;
    list<int> trackB;
    list<int> mergedTrack;

    string mergedInstructions;
 
    readTrack(trackA);
    readTrack(trackB);

    list<int>::iterator itA = trackA.begin();
    list<int>::iterator itB = trackB.begin();

    while (itA != trackA.end() || itB != trackB.end()) 
    {
        if (itA != trackA.end() && itB != trackB.end())
        {
            if (*itA < *itB)
            {
                mergedInstructions += 'A';
                mergedTrack.push_front(*itA);
                itA++;
            }
            else
            {
                mergedInstructions += 'B';
                mergedTrack.push_front(*itB);
                itB++;
            }
        }
        else 
        {
            if (itA != trackA.end())
            {
                mergedInstructions += 'A';
                mergedTrack.push_front(*itA);
                itA++;
            }
            else
            {
                mergedInstructions += 'B';
                mergedTrack.push_front(*itB);
                itB++;
            }
        }     
    }
    cout << mergedInstructions << endl;
    printTrack(mergedTrack);
}