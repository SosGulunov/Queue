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
	int y;
	q >> x;
	q >> y;

	cout << x << " " << y;
}


