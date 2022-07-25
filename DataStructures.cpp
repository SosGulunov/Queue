#include <iostream>
using namespace std;
#include "Queue.h"

int main()
{
	Queue<int> q(15);
	q << 1;
	q << 2;
	q << 3;
	int x;
	q >> x;
	cout << x;
}


