#pragma once
template<class T>
class Queue
{
public:
	Queue(int n) {
		this->n = n;
		this->mas = new T[n];
	}

	void add(T a) {
		if (count == this->n) throw;
		this->mas[count] = a;
		this->count++;
	}

	T pop() {
		if (count == 0) throw;
		T temp = this->mas[count];
		this->mas[count] = nullptr;
		this->count--;
		return temp;
	}

	void operator>>(T m) {
		add(m);
	}

	/*T operator<<() {
		return pop();
	}*/

	~Queue() { delete[]mas; };

private:
	T* mas;
	int count;
	int n;
};
