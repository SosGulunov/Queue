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
		this->mas[count] = 0;
		this->count--;
		return temp;
	}

	void operator>>(T& x) {
		x = this->mas[count-1];
	}

	Queue& operator<<(T m) {
		this->add(m);
		return *this;
	}

	/*T operator<<() {
		return pop();
	}*/

	void show() {
		for (size_t i = 0; i < count; i++)
		{
			cout << mas[i] << " ";
		}
	}

	~Queue() { delete[]mas; };

private:
	T* mas;
	int count;
	int n;
};
