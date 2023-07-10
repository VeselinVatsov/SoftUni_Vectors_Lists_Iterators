#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	unsigned pipes;
	cin >> pipes;

	vector<int> checkup(pipes);
	vector<int> installation(pipes);

	
	
	unsigned cur;
	for (cur = 0; cur < pipes; cur++) 
	{
		cin >> checkup[cur];
	}
	for (cur = 0; cur < pipes; cur++)
	{
		cin >> installation[cur];
	}

	for (cur = 0; cur < pipes; cur++)
	{
		int damage = installation[cur] - checkup[cur];

		int lifespan = installation[cur] / damage;

		cout << lifespan << ' ';
	}
}